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

#ifndef SAWTOOTH_H
#define SAWTOOTH_H

/************** Declaration of Classes with Attributes & Methods **************/

typedef struct SAWTOOTH_T SAWTOOTH_T;
struct SAWTOOTH_T {
	int    samples;
	int    freq; 
	int    freq_sampling;
	double Amplitude_top;
  double Amplitude_bottom;
	double Offset;
	int    *n;
	double *wave;
};

/*************** Prototype of the constructor as a Public Function ************/

SAWTOOTH_T  *SAWTOOTH_New();
SAWTOOTH_T  *SAWTOOTH_Set               ( SAWTOOTH_T *, 
                                          int m, 
                                          int f, 
                                          int fs, 
                                          double A_top,
                                          double A_bott, 
                                          double Off );
int          SAWTOOTH_Get_Samples       ( SAWTOOTH_T * );
int          SAWTOOTH_Get_Frequency     ( SAWTOOTH_T * );
int          SAWTOOTH_Get_Freq_Sampling ( SAWTOOTH_T * );
double       SAWTOOTH_Get_Amp_top       ( SAWTOOTH_T * );
double       SAWTOOTH_Get_Amp_bott      ( SAWTOOTH_T * );
double       SAWTOOTH_Get_Offset        ( SAWTOOTH_T * );
int         *SAWTOOTH_Get_Samples_Vec   ( SAWTOOTH_T * );
double      *SAWTOOTH_Get_Wave_Vec      ( SAWTOOTH_T * );
int         *SAWTOOTH_Free();

/******************************************************************************/

#endif /* SAWTOOTH_H */