/* Ruler 1         2         3         4         5         6         7        */

/******************************************************************************/
/*                                                                            */
/*                   /$$$$$$   /$$$$$$  /$$   /$$  /$$$$$$$$                  */
/*                  /$$__  $$ |_  $$_/ | $$$ | $$ | $$_____/                  */
/*                 | $$  \__/   | $$   | $$$$| $$ | $$                        */
/*                 |  $$$$$$    | $$   | $$ $$ $$ | $$$$$                     */
/*                  \____  $$   | $$   | $$  $$$$ | $$__/                     */
/*                  /$$  \ $$   | $$   | $$\  $$$ | $$                        */
/*                 |  $$$$$$/  /$$$$$$ | $$ \  $$ | $$$$$$$$                  */
/*                  \______/  |______/ |__/  \__/ |________/                  */
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

#include "sine.h"
#include "alloc.h"

/********************** Definition of Private Functions ***********************/

/*FN****************************************************************************
*
*   int SINE_Get_Samples( SINE_T *this )
*
*   Purpose: These method is used for getting the value of samples,
*            which is a member of SINE_T object.
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
SINE_Get_Samples( SINE_T *this )
{
return this->samples;

} /* SINE_Get_Samples */


/*FN****************************************************************************
*
*   int SINE_Get_Frequency( SINE_T *this )
*
*   Purpose: These method is used for getting the value of frequency,
*            which is a member of SINE_T object.
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
SINE_Get_Frequency( SINE_T *this )
{
return this->freq;

} /* SINE_Get_Frequency */


/*FN****************************************************************************
*
*   int SINE_Get_Freq_Sampling( SINE_T *this )
*
*   Purpose: These method is used for getting the value of sampling frequency,
*            which is a member of SINE_T object.
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
SINE_Get_Freq_Sampling( SINE_T *this )
{
return this->freq_sampling;

} /* SINE_Get_Freq_Sampling */


/*FN****************************************************************************
*
*   double SINE_Get_Amplitude( SINE_T *this )
*
*   Purpose: These method is used for getting the value of amplitude,
*            which is a member of SINE_T object.
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
SINE_Get_Amplitude( SINE_T *this )
{
return this->Amplitude;

} /* SINE_Get_Amplitude */


/*FN****************************************************************************
*
*   double SINE_Get_Offset( SINE_T *this )
*
*   Purpose: These method is used for getting the value of offset,
*            which is a member of SINE_T object.
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
SINE_Get_Offset( SINE_T *this )
{
return this->Offset;

} /* SINE_Get_Offset */


/*FN****************************************************************************
*
*   int *SINE_Get_Samples_Vec( SINE_T *this )
*
*   Purpose: These method is used for getting pointer of samples arrays,
*            which is a member of SINE_T object.
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
*SINE_Get_Samples_Vec( SINE_T *this )
{
return this->n;

} /* SINE_Get_Samples_Vec */


/*FN****************************************************************************
*
*   double *SINE_Get_Wave_Vec( SINE_T *this )
*
*   Purpose: These method is used for getting pointer of value's sine arrays,
*            which is a member of SINE_T object.
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
*SINE_Get_Wave_Vec( SINE_T *this )
{
return this->wave;

} /* SINE_Get_Wave_Vec */


/*FN****************************************************************************
*
*   SINE_T *SINE_Set( SINE_T *this, int m, int f, int fs, double A, double Off )
*
*   Parameters:  
*  
*    - m:   Number of samples
*    - f:   Sine frequency
*    - fs:  Sampling frequency
*    - A:   Sine amplitude [Vp]
*    - Off: Sine offset
*
*   Purpose: This method is used for setting all attributes of SINE_T object.
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

SINE_T 
*SINE_Set( SINE_T *this, int m, int f, int fs, double A, double Off )
{
this->samples = m;
this->freq = f;
this->freq_sampling = fs;
this->Amplitude = A;
this->Offset = Off;

Dynamic_Vector (this->n, m, int);
Dynamic_Vector (this->wave, m, double);

return this;

} /* SINE_Set */


/*FN****************************************************************************
*
*   SINE_T *SINE_New();
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

SINE_T 
*SINE_New()
{
SINE_T *sine_ptr = ( SINE_T * )calloc( 1, sizeof( SINE_T ));  
if( sine_ptr == ( SINE_T *)NULL ){
  printf("No HEAP space for data\n");
  exit( 1 );
}

return sine_ptr;

} /* SINE_New */
