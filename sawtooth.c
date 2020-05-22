/* Ruler 1         2         3         4         5         6         7        */

/*******************************************************************************
*                                                                              *
*   /$$$$$$  /$$$$$$ /$$      /$$/$$$$$$$$/$$$$$$  /$$$$$$ /$$$$$$$$/$$   /$$  *
*  /$$__  $$/$$__  $| $$  /$ | $|__  $$__/$$__  $$/$$__  $|__  $$__| $$  | $$  *
* | $$  \__| $$  \ $| $$ /$$$| $$  | $$ | $$  \ $| $$  \ $$  | $$  | $$  | $$  *
* |  $$$$$$| $$$$$$$| $$/$$ $$ $$  | $$ | $$  | $| $$  | $$  | $$  | $$$$$$$$  *
*  \____  $| $$__  $| $$$$_  $$$$  | $$ | $$  | $| $$  | $$  | $$  | $$__  $$  *
*  /$$  \ $| $$  | $| $$$/ \  $$$  | $$ | $$  | $| $$  | $$  | $$  | $$  | $$  *
* |  $$$$$$| $$  | $| $$/   \  $$  | $$ |  $$$$$$|  $$$$$$/  | $$  | $$  | $$  *
*  \______/|__/  |__|__/     \__/  |__/  \______/ \______/   |__/  |__/  |__/  *
*                                                                              *
*                                                                              *
*                  Developed by:                                               *
*                                                                              *
*                            Jhon Hader Fernandez                              *
*                     - jhon_fernandez@javeriana.edu.co                        *
*                                                                              *
*                            Nicolas Eduardo Gaona                             *
*                      - gaona.nicolas@javeriana.edu.co                        *
*                                                                              *
*                                                                              *
*                       Pontificia Universidad Javeriana                       *
*                            Bogota DC - Colombia                              *
*                                  May - 2020                                  *
*                                                                              *
*******************************************************************************/

/********************************** Headers ***********************************/

/************************** Definition of Libraries ***************************/

#include <stdio.h>

/* ------------------------ Inclusion of Own Headers ------------------------ */

#include "sawtooth.h"
#include "alloc.h"

/********************** Definition of Private Functions ***********************/

/*FN****************************************************************************
*
*   int SAWTOOTH_Get_Samples( SAWTOOTH_T *this )
*
*   Purpose: These method is used for getting the value of samples,
*            which is a member of SAWTOOTH_T object.
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
SAWTOOTH_Get_Samples( SAWTOOTH_T *this )
{
return this->samples;

} /* SAWTOOTH_Get_Samples */


/*FN****************************************************************************
*
*   int SAWTOOTH_Get_Frequency( SAWTOOTH_T *this )
*
*   Purpose: These method is used for getting the value of frequency,
*            which is a member of SAWTOOTH_T object.
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
SAWTOOTH_Get_Frequency( SAWTOOTH_T *this )
{
return this->freq;

} /* SAWTOOTH_Get_Frequency */


/*FN****************************************************************************
*
*   int SAWTOOTH_Get_Freq_Sampling( SAWTOOTH_T *this )
*
*   Purpose: These method is used for getting the value of sampling frequency,
*            which is a member of SAWTOOTH_T object.
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
SAWTOOTH_Get_Freq_Sampling( SAWTOOTH_T *this )
{
return this->freq_sampling;

} /* SAWTOOTH_Get_Freq_Sampling */


/*FN****************************************************************************
*
*   double SAWTOOTH_Get_Amp_top( SAWTOOTH_T *this )
*
*   Purpose: These method is used for getting the value of top amplitude,
*            which is a member of SAWTOOTH_T object.
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
SAWTOOTH_Get_Amp_top( SAWTOOTH_T *this )
{
return this->Amplitude_top;

} /* SAWTOOTH_Get_Amp_top */


/*FN****************************************************************************
*
*   double SAWTOOTH_Get_Amp_bott( SAWTOOTH_T *this )
*
*   Purpose: These method is used for getting the value of bottom amplitude,
*            which is a member of SAWTOOTH_T object.
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
SAWTOOTH_Get_Amp_bott( SAWTOOTH_T *this )
{
return this->Amplitude_bottom;

} /* SAWTOOTH_Get_Amp_bott */


/*FN****************************************************************************
*
*   double SAWTOOTH_Get_Offset( SAWTOOTH_T *this )
*
*   Purpose: These method is used for getting the value of offset,
*            which is a member of SAWTOOTH_T object.
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
SAWTOOTH_Get_Offset( SAWTOOTH_T *this )
{
return this->Offset;

} /* SAWTOOTH_Get_Offset */


/*FN****************************************************************************
*
*   int *SAWTOOTH_Get_Samples_Vec( SAWTOOTH_T *this )
*
*   Purpose: These method is used for getting pointer of samples arrays,
*            which is a member of SAWTOOTH_T object.
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
*SAWTOOTH_Get_Samples_Vec( SAWTOOTH_T *this )
{
return this->n;

} /* SAWTOOTH_Get_Samples_Vec */


/*FN****************************************************************************
*
*   double *SAWTOOTH_Get_Wave_Vec( SAWTOOTH_T *this )
*
*   Purpose: These method is used for getting pointer of value's SAWTOOTH 
*            arrays, which is a member of SAWTOOTH_T object.
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
*SAWTOOTH_Get_Wave_Vec( SAWTOOTH_T *this )
{
return this->wave;

} /* SAWTOOTH_Get_Wave_Vec */


/*FN****************************************************************************
*
*   SAWTOOTH_T *SAWTOOTH_Set( SAWTOOTH_T *this, int m, int f, int fs, 
*                             double A_top, double A_bott, double Off )
*
*   Parameters:  
*  
*    - m:      Number of samples
*    - f:      Sawtooth frequency
*    - fs:     Sampling frequency
*    - A_top:  Sawtooth maximum amplitude [Vp]
*    - A_bott: Sawtooth minimum amplitude [-Vp]
*    - Off:    Sawtooth offset
*
*   Purpose: This method is used for setting all attributes of SAWTOOTH_T object
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

SAWTOOTH_T 
*SAWTOOTH_Set( SAWTOOTH_T *this, int m, int f, int fs, double A_top, 
               double A_bott, double Off )
{
this->samples = m;
this->freq = f;
this->freq_sampling = fs;
this->Amplitude_top = A_top;
this->Amplitude_bottom = A_bott;
this->Offset = Off;

Dynamic_Vector (this->n, m, int);
Dynamic_Vector (this->wave, m, double);

return this;

} /* SAWTOOTH_Set */


/*FN****************************************************************************
*
*   SAWTOOTH_T *SAWTOOTH_New();
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

SAWTOOTH_T 
*SAWTOOTH_New()
{
SAWTOOTH_T *sawtooth_ptr = ( SAWTOOTH_T * )calloc( 1, sizeof( SAWTOOTH_T ));  
if( sawtooth_ptr == ( SAWTOOTH_T *)NULL ){
  printf("No HEAP space for data\n");
  exit( 1 );
}

return sawtooth_ptr;

} /* SAWTOOTH_New */
