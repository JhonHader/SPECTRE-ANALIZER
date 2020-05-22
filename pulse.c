/* Ruler 1         2         3         4         5         6         7        */

/******************************************************************************/
/*                                                                            */
/*            /$$$$$$$   /$$   /$$  /$$         /$$$$$$   /$$$$$$$$           */
/*           | $$__  $$ | $$  | $$ | $$        /$$__  $$ | $$_____/           */
/*           | $$  \ $$ | $$  | $$ | $$       | $$  \__/ | $$                 */
/*           | $$$$$$$/ | $$  | $$ | $$       |  $$$$$$  | $$$$$              */
/*           | $$____/  | $$  | $$ | $$        \____  $$ | $$__/              */
/*           | $$       | $$  | $$ | $$        /$$  \ $$ | $$                 */
/*           | $$       |  $$$$$$/ | $$$$$$$$ |  $$$$$$/ | $$$$$$$$           */
/*           |__/        \______/  |________/  \______/  |________/           */
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

#include "pulse.h"
#include "alloc.h"


/********************** Definition of Private Functions ***********************/

/*FN****************************************************************************
*
*   int PULSE_Get_Samples( PULSE_T *this )
*
*   Purpose: These method is used for getting the value of samples,
*            which is a member of PULSE_T object.
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
PULSE_Get_Samples( PULSE_T *this )
{
return this->samples;

} /* PULSE_Get_Samples */


/*FN****************************************************************************
*
*   int PULSE_Get_Frequency( PULSE_T *this )
*
*   Purpose: These method is used for getting the value of frequency,
*            which is a member of PULSE_T object.
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
PULSE_Get_Frequency( PULSE_T *this )
{
return this->freq;

} /* PULSE_Get_Frequency */


/*FN****************************************************************************
*
*   int PULSE_Get_Freq_Sampling( PULSE_T *this )
*
*   Purpose: These method is used for getting the value of sampling frequency,
*            which is a member of PULSE_T object.
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
PULSE_Get_Freq_Sampling( PULSE_T *this )
{
return this->freq_sampling;

} /* PULSE_Get_Freq_Sampling */


/*FN****************************************************************************
*
*   double PULSE_Get_Amplitude( PULSE_T *this )
*
*   Purpose: These method is used for getting the value of amplitude,
*            which is a member of PULSE_T object.
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
PULSE_Get_Amplitude( PULSE_T *this )
{
return this->Amplitude;

} /* PULSE_Get_Amplitude */


/*FN****************************************************************************
*
*   double PULSE_Get_Duty_cycle( PULSE_T *this )
*
*   Purpose: These method is used for getting the value of duty cycle,
*            which is a member of PULSE_T object.
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
PULSE_Get_Duty_cycle( PULSE_T *this )
{
return this->Duty_cycle;

} /* PULSE_Get_Duty_cycle */


/*FN****************************************************************************
*
*   double PULSE_Get_Offset( PULSE_T *this )
*
*   Purpose: These method is used for getting the value of offset,
*            which is a member of PULSE_T object.
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
PULSE_Get_Offset( PULSE_T *this )
{
return this->Offset;

} /* PULSE_Get_Offset */


/*FN****************************************************************************
*
*   int *PULSE_Get_Samples_Vec( PULSE_T *this )
*
*   Purpose: These method is used for getting pointer of samples arrays,
*            which is a member of PULSE_T object.
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
*PULSE_Get_Samples_Vec( PULSE_T *this )
{
return this->n;

} /* PULSE_Get_Samples_Vec */


/*FN****************************************************************************
*
*   double *PULSE_Get_Wave_Vec( PULSE_T *this )
*
*   Purpose: These method is used for getting pointer of value's PULSE arrays,
*            which is a member of PULSE_T object.
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
*PULSE_Get_Wave_Vec( PULSE_T *this )
{
return this->wave;

} /* PULSE_Get_Wave_Vec */


/*FN****************************************************************************
*
*   PULSE_T *PULSE_Set( PULSE_T *this, int m, int f, int fs, double A, double Off )
*
*   Parameters:  
*  
*    - m:   Number of samples
*    - f:   PULSE frequency
*    - fs:  Sampling frequency
*    - A:   PULSE amplitude [Vp]
*    - Off: PULSE offset
*
*   Purpose: This method is used for setting all attributes of PULSE_T object.
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

PULSE_T 
*PULSE_Set( PULSE_T *this, int m, int f, int fs, double A, double dc,
            double Off )
{
this->samples = m;
this->freq = f;
this->freq_sampling = fs;
this->Amplitude = A;
this->Duty_cycle = dc;
this->Offset = Off;

Dynamic_Vector (this->n, m, int);
Dynamic_Vector (this->wave, m, double);

return this;

} /* PULSE_Set */


/*FN****************************************************************************
*
*   PULSE_T *PULSE_New();
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

PULSE_T 
*PULSE_New()
{
PULSE_T *pulse_ptr = ( PULSE_T * )calloc( 1, sizeof( PULSE_T ));  
if( pulse_ptr == ( PULSE_T *)NULL ){
  printf("No HEAP space for data\n");
  exit( 1 );
}

return pulse_ptr;

} /* PULSE_New */


/*FN****************************************************************************
*
*   void *PULSE_Free();
*
*   Purpose: This destructor of PULSE_T class.
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
*PULSE_Free()
{

// STATEMENTS

} // PULSE_Free */