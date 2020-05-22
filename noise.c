/* Ruler 1         2         3         4         5         6         7        */

/******************************************************************************/
/*                                                                            */
/*             /$$   /$$   /$$$$$$   /$$$$$$   /$$$$$$   /$$$$$$$$            */
/*            | $$$ | $$  /$$__  $$ |_  $$_/  /$$__  $$ | $$_____/            */
/*            | $$$$| $$ | $$  \ $$   | $$   | $$  \__/ | $$                  */
/*            | $$ $$ $$ | $$  | $$   | $$   |  $$$$$$  | $$$$$               */
/*            | $$  $$$$ | $$  | $$   | $$    \____  $$ | $$__/               */
/*            | $$\  $$$ | $$  | $$   | $$    /$$  \ $$ | $$                  */
/*            | $$ \  $$ |  $$$$$$/  /$$$$$$ |  $$$$$$/ | $$$$$$$$            */
/*            |__/  \__/  \______/  |______/  \______/  |________/            */
/*                                                                            */
/*                                                                            */
/*                 Developed by:                                              */
/*                                                                            */
/*                           Jhon Hader Fernandez                             */
/*                    - jhon_fernandez@javeriana.edu.co                       */
/*                                                                            */
/*                           Nicolas Eduardo Gaona                            */
/*                     - gaona.nicolas@javeriana.edu.co                       */
/*                                                                            */
/*                                                                            */
/*                      Pontificia Universidad Javeriana                      */
/*                           Bogota DC - Colombia                             */
/*                                 May - 2020                                 */
/*                                                                            */
/******************************************************************************/

/********************************** Headers ***********************************/

/************************** Definition of Libraries ***************************/

#include <stdio.h>

/* ------------------------ Inclusion of Own Headers ------------------------ */

#include "noise.h"
#include "alloc.h"

/********************** Definition of Private Functions ***********************/

/*FN****************************************************************************
*
*   int NOISE_Get_Samples( NOISE_T *this )
*
*   Purpose: These method is used for getting the value of samples,
*            which is a member of NOISE_T object.
*
*   Origin:  https://www.pvv.ntnu.no/~hakonhal/main.cgi/c/classes/
*
*   Plan:    Simple function that does not need a plan description
*
*   Register of Revisions:
*
*   DATE         RESPONSIBLE           COMMENT
*   -----------------------------------------------------------------------
*   May 01/2020  Fernandez & Gaona     Implementation
*   Apr 30/2020  J.C.Giraldo           Template
*   --- --/----  H.Hallinsgstad        Initial implementation
*
*******************************************************************************/

int 
NOISE_Get_Samples( NOISE_T *this )
{
return this->samples;

} /* NOISE_Get_Samples */


/*FN****************************************************************************
*
*   double NOISE_Get_Amplitude_max( NOISE_T *this )
*
*   Purpose: These method is used for getting the value of maximum amplitude,
*            which is a member of NOISE_T object.
*
*   Origin:  https://www.pvv.ntnu.no/~hakonhal/main.cgi/c/classes/
*
*   Plan:    Simple function that does not need a plan description
*
*   Register of Revisions:
*
*   DATE         RESPONSIBLE           COMMENT
*   -----------------------------------------------------------------------
*   May 01/2020  Fernandez & Gaona     Implementation
*   Apr 30/2020  J.C.Giraldo           Template
*   --- --/----  H.Hallinsgstad        Initial implementation
*
*******************************************************************************/

double 
NOISE_Get_Amplitude_max( NOISE_T *this )
{
return this->Amp_max;

} /* NOISE_Get_Amplitude_max */


/*FN****************************************************************************
*
*   double NOISE_Get_Amplitude_min( NOISE_T *this )
*
*   Purpose: These method is used for getting the value of minimum amplitude,
*            which is a member of NOISE_T object.
*
*   Origin:  https://www.pvv.ntnu.no/~hakonhal/main.cgi/c/classes/
*
*   Plan:    Simple function that does not need a plan description
*
*   Register of Revisions:
*
*   DATE         RESPONSIBLE           COMMENT
*   -----------------------------------------------------------------------
*   May 01/2020  Fernandez & Gaona     Implementation
*   Apr 30/2020  J.C.Giraldo           Template
*   --- --/----  H.Hallinsgstad        Initial implementation
*
*******************************************************************************/

double 
NOISE_Get_Amplitude_min( NOISE_T *this )
{
return this->Amp_min;

} /* NOISE_Get_Amplitude_min */


/*FN****************************************************************************
*
*   double NOISE_Get_Offset( NOISE_T *this )
*
*   Purpose: These method is used for getting the value of offset,
*            which is a member of NOISE_T object.
*
*   Origin:  https://www.pvv.ntnu.no/~hakonhal/main.cgi/c/classes/
*
*   Plan:    Simple function that does not need a plan description
*
*   Register of Revisions:
*
*   DATE         RESPONSIBLE           COMMENT
*   -----------------------------------------------------------------------
*   May 01/2020  Fernandez & Gaona     Implementation
*   Apr 30/2020  J.C.Giraldo           Template
*   --- --/----  H.Hallinsgstad        Initial implementation
*
*******************************************************************************/

double 
NOISE_Get_Offset( NOISE_T *this )
{
return this->Offset;

} /* NOISE_Get_Offset */


/*FN****************************************************************************
*
*   int *NOISE_Get_Samples_Vec( NOISE_T *this )
*
*   Purpose: These method is used for getting pointer of samples arrays,
*            which is a member of NOISE_T object.
*
*   Origin:  https://www.pvv.ntnu.no/~hakonhal/main.cgi/c/classes/
*
*   Plan:    Simple function that does not need a plan description
*
*   Register of Revisions:
*
*   DATE         RESPONSIBLE           COMMENT
*   -----------------------------------------------------------------------
*   May 01/2020  Fernandez & Gaona     Implementation
*   Apr 30/2020  J.C.Giraldo           Template
*   --- --/----  H.Hallinsgstad        Initial implementation
*
*******************************************************************************/

int 
*NOISE_Get_Samples_Vec( NOISE_T *this )
{
return this->n;

} /* NOISE_Get_Samples_Vec */


/*FN****************************************************************************
*
*   double *NOISE_Get_Wave_Vec( NOISE_T *this )
*
*   Purpose: These method is used for getting pointer of value's sine arrays,
*            which is a member of NOISE_T object.
*
*   Origin:  https://www.pvv.ntnu.no/~hakonhal/main.cgi/c/classes/
*
*   Plan:    Simple function that does not need a plan description
*
*   Register of Revisions:
*
*   DATE         RESPONSIBLE           COMMENT
*   -----------------------------------------------------------------------
*   May 01/2020  Fernandez & Gaona     Implementation
*   Apr 30/2020  J.C.Giraldo           Template
*   --- --/----  H.Hallinsgstad        Initial implementation
*
*******************************************************************************/

double 
*NOISE_Get_Wave_Vec( NOISE_T *this )
{
return this->wave;

} /* NOISE_Get_Wave_Vec */


/*FN****************************************************************************
*
*   NOISE_T *NOISE_Set( NOISE_T *this, int m, double A_max, double A_min,
*                       double Off )
*
*   Parameters:  
*  
*    - m:     Number of samples
*    - A_max: Maximum amplitude [Vp]
*    - A_min: Minimum amplitude [-Vp]
*    - Off:   Sine offset
*
*   Purpose: This method is used for setting all attributes of NOISE_T object.
*
*   Origin:  https://www.pvv.ntnu.no/~hakonhal/main.cgi/c/classes/
*
*   Plan:    Simple function that does not need a plan description
*
*   Register of Revisions:
*
*   DATE         RESPONSIBLE           COMMENT
*   -----------------------------------------------------------------------
*   May 01/2020  Fernandez & Gaona     Implementation
*   Apr 30/2020  J.C.Giraldo           Template
*   --- --/----  H.Hallinsgstad        Initial implementation
*
*******************************************************************************/

NOISE_T 
*NOISE_Set( NOISE_T *this, int m, double A_max, double A_min, double Off )
{
this->samples = m;
this->Amp_max = A_max;
this->Amp_min = A_min;
this->Offset = Off;

Dynamic_Vector (this->n, m, int);
Dynamic_Vector (this->wave, m, double);

return this;

} /* NOISE_Set */


/*FN****************************************************************************
*
*   NOISE_T *NOISE_New();
*
*   Purpose: This constructor set up the class by linking private definitions
*            of functions to the public identifiers to access these methods
*
*   Origin:  https://www.pvv.ntnu.no/~hakonhal/main.cgi/c/classes/
*
*   Plan:    Simple function that does not need a plan description
*
*   Register of Revisions:
*
*   DATE         RESPONSIBLE           COMMENT
*   -----------------------------------------------------------------------
*   May 01/2020  Fernandez & Gaona     Implementation
*   Apr 30/2020  J.C.Giraldo           Template
*   --- --/----  H.Hallinsgstad        Initial implementation
*
*******************************************************************************/

NOISE_T 
*NOISE_New()
{
NOISE_T *noise_ptr = ( NOISE_T * )calloc( 1, sizeof( NOISE_T ));  
if( noise_ptr == ( NOISE_T *)NULL ){
  printf("No HEAP space for data\n");
  exit( 1 );
}

return noise_ptr;

} /* NOISE_New */


/*FN****************************************************************************
*
*   void *NOISE_Free();
*
*   Purpose: This destructor of NOISE_T class.
*
*   Origin:  https://www.pvv.ntnu.no/~hakonhal/main.cgi/c/classes/
*
*   Plan:    Simple function that does not need a plan description
*
*   Register of Revisions:
*
*   DATE         RESPONSIBLE           COMMENT
*   -----------------------------------------------------------------------
*   May 01/2020  Fernandez & Gaona     Implementation
*   Apr 30/2020  J.C.Giraldo           Template
*   --- --/----  H.Hallinsgstad        Initial implementation
*
*******************************************************************************/

/*
void 
*NOISE_Free()
{

// STATEMENTS

} // NOISE_Free */