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

#ifndef NOISE_H
#define NOISE_H

/************** Declaration of Classes with Attributes & Methods **************/

typedef struct NOISE_T NOISE_T;
struct NOISE_T {
	int    samples;
	double Amp_max; 
  double Amp_min;
	double Offset;
	int    *n;
	double *wave;
};

/*************** Prototype of the constructor as a Public Function ************/

NOISE_T  *NOISE_New();
NOISE_T  *NOISE_Set              ( NOISE_T *, 
                                   int m, 
                                   double A_max,
                                   double A_min,    
                                   double Off );
int      NOISE_Get_Samples       ( NOISE_T * );
double   NOISE_Get_Amplitude_max ( NOISE_T * );
double   NOISE_Get_Amplitude_min ( NOISE_T * );
double   NOISE_Get_Offset        ( NOISE_T * );
int     *NOISE_Get_Samples_Vec   ( NOISE_T * );
double  *NOISE_Get_Wave_Vec      ( NOISE_T * );
int     *NOISE_Free();

#endif /* NOISE_H */