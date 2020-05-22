/* Ruler 1         2         3         4         5         6         7        */

/*********************************  alloc.h  **********************************/
/*                                                                            */
/*   Purpose: Macros for Dynamic Arrays                                       */
/*                                                                            */
/*   Origin:  Adapted from various sources by Juan C. Giraldo, May 29th, 2013 */
/*                                                                            */
/*   Notes:   None                                                            */
/*                                                                            */
/******************************************************************************/

#ifndef ALLOC_H
#define ALLOC_H

/************************** Definition of Libraries ***************************/

#include <stdio.h>
#include <stdlib.h>

/**************************** Definition of Macros ****************************/

/* ----------------------- Macros for Dynamic Arrays ------------------------ */

/*MC****************************************************************************
*
*   Dynamic_Vector( array1_ptr, size, type )
*
*   Purpose:         Create dynamic 1D array in execution time with cWAVES
*
*   Characteristics: (1) No overhead
*                    (2) Report no heap space
*
*   Pre-requisite:   Vble Memory_Used must be defined previously in zero
*
*   Register of Revisions (Debugging Process):
*
*   DATE       RESPONSIBLE  COMMENT
*   -----------------------------------------------------------------------
*   Jun 01/13  J.C.Giraldo  Initial implementation
*
*******************************************************************************/

#define Dynamic_Vector( array1_ptr, size, type )\
{\
array1_ptr = ( type * )calloc( ( size ), sizeof( type ) );\
if( array1_ptr == ( type * )NULL ) {\
	fprintf( stderr, "No HEAP space for data\n" );\
	exit( 1 );\
}\
}

/*MC****************************************************************************
*
*   Free_Dynamic_Vector( array1_ptr )
*
*   Purpose:         Free dynamic 1D array in execution time
*
*   Register of Revisions (Debugging Process):
*
*   DATE       RESPONSIBLE  COMMENT
*   -----------------------------------------------------------------------
*   May 29/13  J.C.Giraldo  Initial implementation
*
*******************************************************************************/

#define Free_Dynamic_Vector( array1_ptr )\
{\
free( array1_ptr );\
}

/******************************************************************************/

#endif /* ALLOC_H */
