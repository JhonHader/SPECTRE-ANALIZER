/* Ruler 1         2         3         4         5         6         7        */

/*******************************************************************************
*                                                                              *
*    /$$$$$$   /$$$$$$  /$$      /$$ /$$$$$$$  /$$       /$$$$$$$$ /$$   /$$   *
*   /$$__  $$ /$$__  $$| $$$    /$$$| $$__  $$| $$      | $$_____/| $$  / $$   *
*  | $$  \__/| $$  \ $$| $$$$  /$$$$| $$  \ $$| $$      | $$      |  $$/ $$/   *
*  | $$      | $$  | $$| $$ $$/$$ $$| $$$$$$$/| $$      | $$$$$    \  $$$$/    *
*  | $$      | $$  | $$| $$  $$$| $$| $$____/ | $$      | $$__/     >$$  $$    *
*  | $$    $$| $$  | $$| $$\  $ | $$| $$      | $$      | $$       /$$/\  $$   *
*  |  $$$$$$/|  $$$$$$/| $$ \/  | $$| $$      | $$$$$$$$| $$$$$$$$| $$  \ $$   *
*   \______/  \______/ |__/     |__/|__/      |________/|________/|__/  |__/   *
*                                                                              *
*******************************************************************************/

#ifndef COMPLEX_H
#define COMPLEX_H

/************************** Definition of Data Types **************************/

/* ---------------------------- Complex Numbers ----------------------------- */

typedef struct {
	double real; /* Real part of type complex number      */
	double imag; /* Imaginary part of type complex number */
} COMPLEX_T;

/************************** Prototypes of Functions ***************************/

/* ---------------------------- Public Functions ---------------------------- */

int cplx_Swap( COMPLEX_T *, COMPLEX_T * );
COMPLEX_T cplx_Multiply ( COMPLEX_T, COMPLEX_T );
COMPLEX_T cplx_Subtract ( COMPLEX_T, COMPLEX_T );
COMPLEX_T cplx_Add      ( COMPLEX_T, COMPLEX_T );
COMPLEX_T cplx_Scale    ( COMPLEX_T, long );
double cplx_Magnitude   ( COMPLEX_T );
double cplx_Phase       ( COMPLEX_T );
double cplx_Ratio       ( COMPLEX_T, COMPLEX_T );
int cplx_Initiate_Vector( COMPLEX_T *, int );

/******************************************************************************/

#endif /* COMPLEX_H */