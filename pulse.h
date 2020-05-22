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

#ifndef PULSE_H
#define PULSE_H

/************** Declaration of Classes with Attributes & Methods **************/

typedef struct PULSE_T PULSE_T;
struct PULSE_T {
	int    samples;
	int    freq; 
	int    freq_sampling;
	double Amplitude;
  double Duty_cycle;
	double Offset;
	int    *n;
	double *wave;
};

/*************** Prototype of the constructor as a Public Function ************/

PULSE_T  *PULSE_New();
PULSE_T  *PULSE_Set              ( PULSE_T *, 
                                  int m, 
                                  int f, 
                                  int fs, 
                                  double A,
                                  double dc,  
                                  double Off );
int      PULSE_Get_Samples       ( PULSE_T * );
int      PULSE_Get_Frequency     ( PULSE_T * );
int      PULSE_Get_Freq_Sampling ( PULSE_T * );
double   PULSE_Get_Amplitude     ( PULSE_T * );
double   PULSE_Get_Duty_cycle    ( PULSE_T * );
double   PULSE_Get_Offset        ( PULSE_T * );
int     *PULSE_Get_Samples_Vec   ( PULSE_T * );
double  *PULSE_Get_Wave_Vec      ( PULSE_T * );
int     *PULSE_Free();

/******************************************************************************/

#endif /* PULSE_H */