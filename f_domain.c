/* Ruler 1         2         3         4         5         6         7        */

/******************************************************************************/
/*                                                                            */
/*                       /$$$$$$$$  /$$$$$$$$  /$$$$$$$$                      */
/*                      | $$_____/ | $$_____/ |__  $$__/                      */
/*                      | $$       | $$          | $$                         */
/*                      | $$$$$    | $$$$$       | $$                         */
/*                      | $$__/    | $$__/       | $$                         */
/*                      | $$       | $$          | $$                         */
/*                      | $$       | $$          | $$                         */
/*                      |__/       |__/          |__/                         */
/*                                                                            */
/******************************************************************************/

/********************************** Headers ***********************************/

/************************** Definition of Libraries ***************************/

#include <stdlib.h>
#include <math.h>

/* ------------------------ Inclusion of Own Headers ------------------------ */

#include "f_domain.h"

/*****************************  Public Functions  *****************************/

/*FN****************************************************************************
*
*   int
*   Compute_FFT( int dir, int pow, COMPLEX_T *x );
*
*   Return:          Transformation in values passed by reference
*
*   Purpose:         Compute an in-place complex-to-complex FFT
*
*   Note:            This function computes an in-place complex-to-complex FFT
*                    x.real and y.imag are the real and imaginary arrays of
*                    2^pow points.
*                    dir = 1 or FORWARD gives forward transform
*                    dir = 0 or REVERSE gives reverse transform
*
*                    There is a modification by Peter Cusak to utilize the
*                    Microsoft complex type.
*
*   Plan:
*           Part 1: Calculate the number of points
*           Part 2: Do the bit reversal
*           Part 3: Compute the FFT
*           Part 4: Scale for forward transformation
*
*   Register of Revisions (Debugging Process):
*
*   DATE         RESPONSIBLE  COMMENT
*   -------------------------------------------------------------------------
*   Jun 04/2013  J.C.Giraldo  Incorporation of functions with complex numbers
*   May 03/2013  J.C.Giraldo  Readable identifiers
*   Jun --/1993  P. Bourkes   Initial implementation
*
*******************************************************************************/

int
Compute_FFT( int dir, int pow, COMPLEX_T *x )
{
long    points, i, j, k, l, i1, i2, l1, l2;
COMPLEX_T c, temp, u;

/* Part 1: Calculate the number of points */

for( points = 1, i = 0; i < pow; i++ ) points <<= 1;

/* Part 2: Do the bit reversal */

i2 = points >> 1;
j = 0;
for( i = 0; i < points-1; i++ ) {
    if( i < j ) cplx_Swap( &x[i], &x[j] );
    k = i2;
    while( k <= j ) j -= k, k >>= 1;
    j += k;
}

/* Part 3: Compute the FFT */

c.real = -1.0;
c.imag =  0.0;

l2 =  1;
for( l = 0; l < pow; l++ ) {
    l1 = l2;
    l2 <<= 1;
    u.real = 1.0;
    u.imag = 0.0;
    for( j = 0; j < l1; j++) {
        for( i = j; i < points; i += l2 ) {
            i1    = i + l1;
            temp  = cplx_Multiply( u, x[i1] );
            x[i1] = cplx_Subtract( x[i], temp );
            x[i]  = cplx_Add( x[i], temp );
        }
        u = cplx_Multiply( u, c );
    }
    c.imag = sqrt( ( 1.0 - c.real ) / 2.0 );
    if( dir == FORWARD ) c.imag = -c.imag;
    c.real = sqrt( ( 1.0 + c.real ) / 2.0 );
}

/* Part 4: Scale for forward transformation */

if( dir == FORWARD )
    for( i = 0; i < points; i++ )
        x[i] = cplx_Scale( x[i], points );

return( SUCCEED );

} /* Compute_FFT */



/*FN****************************************************************************
*
*   int
*   Find_Power( int number );
*
*   Purpose:         Return the (integer) logarithm in base 2 of a number
*
*   Note:            Number must be an integer equal to zero or greater
*                    Another option is shifting and truncation
*
*   Register of Revisions (Debugging Process):
*
*   DATE       RESPONSIBLE  COMMENT
*   -----------------------------------------------------------------------
*   May 03/13  J.C.Giraldo  Readable identifiers
*   --- --/--  P. Bourkes   Initial implementation
*
*******************************************************************************/

int
Find_Power( long number )
{
int power = 0;

while( number != 1 ) {
    number = (long)( number/2 );
    power++;
}

return( power );

} /* Find_Power */
