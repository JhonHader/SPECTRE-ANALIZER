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

#ifndef F_DOMAIN_H
#define F_DOMAIN_H

/************************** Definition of Libraries ***************************/

/* ------------------------ Inclusion of Own Headers ------------------------ */

#include "complex.h"

/*********************** Directives of C Pre-processor ************************/

/************************** Conditional Compilation ***************************/

#define DEBUGGING                 /* Use directive when debugging some lines  */

/**************************** Symbolic  Constants *****************************/

/* ---------------------- Constants to Exit Functions ----------------------- */

#define SUCCEED              1    /* Succeeded ending in function execution   */
#define FAIL                 0    /* Failed    ending in function execution   */

/* ---------------------- Analysis in Frequency Domain ---------------------- */

#define FORWARD              1    /* Forward direction for FFT computation    */
#define REVERSE              0    /* Reverse direction for FFT computation    */

/* -------- Default Values for Iteration in Time & Frequency Domain --------- */

#define PADDING_POWER        4                /* Default padding power factor */

/************************** Prototypes of Functions ***************************/

/* ---------------------------- Public Functions ---------------------------- */

int Compute_FFT( int, int, COMPLEX_T * );
int Find_Power( long );

/******************************************************************************/

#endif /* F_DOMAIN_H */