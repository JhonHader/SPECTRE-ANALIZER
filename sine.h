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

#ifndef SINE_H
#define SINE_H

/************** Declaration of Classes with Attributes & Methods **************/

typedef struct SINE_T SINE_T;
struct SINE_T {
	int    samples;
	int    freq; 
	int    freq_sampling;
	double Amplitude;
	double Offset;
	int    *n;
	double *wave;
};

/*************** Prototype of the constructor as a Public Function ************/

SINE_T  *SINE_New();
SINE_T  *SINE_Set               ( SINE_T *, 
                                  int m, 
                                  int f, 
                                  int fs, 
                                  double A, 
                                  double Off );
int      SINE_Get_Samples       ( SINE_T * );
int      SINE_Get_Frequency     ( SINE_T * );
int      SINE_Get_Freq_Sampling ( SINE_T * );
double   SINE_Get_Amplitude     ( SINE_T * );
double   SINE_Get_Offset        ( SINE_T * );
int     *SINE_Get_Samples_Vec   ( SINE_T * );
double  *SINE_Get_Wave_Vec      ( SINE_T * );
int     *SINE_Free();

/******************************************************************************/

#endif /* SINE_H */