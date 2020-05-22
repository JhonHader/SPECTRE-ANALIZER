/* Ruler 1         2         3         4         5         6         7        */

/******************************************************************************/
/*                                                                            */
/*         /$$      /$$   /$$$$$$   /$$    /$$  /$$$$$$$$   /$$$$$$           */
/*        | $$  /$ | $$  /$$__  $$ | $$   | $$ | $$_____/  /$$__  $$          */
/*        | $$ /$$$| $$ | $$  \ $$ | $$   | $$ | $$       | $$  \__/          */
/*        | $$/$$ $$ $$ | $$$$$$$$ |  $$ / $$/ | $$$$$    |  $$$$$$           */
/*        | $$$$_  $$$$ | $$__  $$  \  $$ $$/  | $$__/     \____  $$          */
/*        | $$$/ \  $$$ | $$  | $$   \  $$$/   | $$        /$$  \ $$          */
/*        | $$/   \  $$ | $$  | $$    \  $/    | $$$$$$$$ |  $$$$$$/          */
/*        |__/     \__/ |__/  |__/     \_/     |________/  \______/           */
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
/*                                 Apr - 2020                                 */
/*                                                                            */
/******************************************************************************/

/*********************************  WAVES.h  **********************************/
/*                                                                            */
/*   Purpose: Functions for generate waves                                    */
/*                                                                            */
/*   Origin:  Developed by Jhon Fernandez & Nicolas Gaona, Apr 25th, 2020     */
/*                                                                            */
/*   Notes:   You must include object (class and methods) of waves and all    */
/*            objects has be setting.                                         */ 
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/*                                                                            */
/*    waves.h was designed for generate different waves.                      */
/*                                                                            */
/*    Copyright (C) 2020 Jhon Hader Fernandez & Nicolas Eduardo Gaona         */
/*                                                                            */
/*    This file is part of monitoring and quality of power consumption.       */
/*                                                                            */
/******************************************************************************/

#ifndef WAVES_H
#define WAVES_H

/************************** Definition of Libraries ***************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/************************** Definition of functions ***************************/

/* ---------------------- Functions for generate waves ---------------------- */

/*FN****************************************************************************
*
*   void Sine_Generator( SINE_T * )
* 
*   Return:  Nothing
*
*   Purpose: Generate a sine wave
*
*   Plan:    It is not necessary
*
*   Register of Revisions (Debugging Proccess):
*
*   DATE       RESPONSIBLE                 COMMENT
*   -----------------------------------------------------------------------
*   Apr 10/20  J.H.Fernandez & N.E.Gaona   Initial implementation
*
*******************************************************************************/

void
Sine_Generator ( SINE_T *this )
{
    
int m, f, fs;
double A, off; 

m = this->samples;
f = this->freq;
fs = this->freq_sampling;
A = this->Amplitude;
off = this->Offset;

double argument;
int *ptr1 = &this->n[0];
double *ptr2 = &this->wave[0];
double Ts;
int i = 0;

Ts = 1 / ((double) fs);

for (i = 0; i < m; i++)
{
    *(ptr1 + i) = i;
    argument = (2) * (M_PI) * (f) * (*(ptr1 + i)) * (Ts);
    *(ptr2 + i) = (A * sin (argument)) + off;
} /* for */

} /* Sine_Generator */


/*FN****************************************************************************
*
*   void Pulse_Generator( PULSE_T * )
*
*   Return:  Nothing
*
*   Purpose: Generate a pulse wave
*
*   Plan:    It is not necessary
*
*   Register of Revisions (Debugging Proccess):
*
*   DATE       RESPONSIBLE                 COMMENT
*   -----------------------------------------------------------------------
*   Apr 10/20  J.H.Fernandez & N.E.Gaona   Initial implementation
*
*******************************************************************************/

void
Pulse_Generator( PULSE_T *this )
{

int m, f, fs;
double A, Thao, off; 

m = this->samples;
f = this->freq;
fs = this->freq_sampling;
A = this->Amplitude;
Thao = this->Duty_cycle;
off = this->Offset;

int *ptr1 = &this->n[0];
double *ptr2 = &this->wave[0];
double T, t_on, module, partitions;
int i = 0;

T = 1/((double)f);
t_on = T*(Thao/100.0);
partitions = (double)(fs/f);
    
for(i = 0; i < m; i++)
{
    *(ptr1+i) = i;
    module = ((double)(i%(int)partitions))*(T/(partitions-1));
    if(module <= t_on){
        *(ptr2+i) = (A)+off;
    } else {
        *(ptr2+i) = -(A)+off;
    } /* if */
} /* for */
    
} /* Pulse_Generator*/


/*FN****************************************************************************
*
*   void Sawtooth_Generator( SAWTOOTH_T * )
*
*   Return:  Nothing
*
*   Purpose: Generate a sawtooth wave
*
*   Plan:    It is not necessary
*
*   Register of Revisions (Debugging Proccess):
*
*   DATE       RESPONSIBLE                 COMMENT
*   -----------------------------------------------------------------------
*   Apr 10/20  J.H.Fernandez & N.E.Gaona   Initial implementation
*
*******************************************************************************/

void 
Sawtooth_Generator ( SAWTOOTH_T *this )
{

int m, f, fs;
double A_Top, A_Bott, off; 

m = this->samples;
f = this->freq;
fs = this->freq_sampling;
A_Top = this->Amplitude_top;
A_Bott = this->Amplitude_bottom;
off = this->Offset;

int *ptr1 = &this->n[0];
double *ptr2 = &this->wave[0];
double slope, T, module, partitions;
int i = 0;    
    
T = 1/((double)f);
slope = (A_Top-A_Bott)/(T);
partitions = (double)(fs/f);
    
for(i = 0; i < m; i++){
    *(ptr1+i) = i;
    module = ((double)(i%(int)partitions))*(T/(partitions-1));
    *(ptr2+i) = ((slope*module)+A_Bott)+off;
} /* for */

} /* Sawtooth_Generator*/


/*FN****************************************************************************
*
*   void Noise_Generator( NOISE_T * )
*
*   Return:  Nothing
*
*   Purpose: Generate noise wave
*
*   Plan:    It is not necessary
*
*   Register of Revisions (Debugging Proccess):
*
*   DATE       RESPONSIBLE                 COMMENT
*   -----------------------------------------------------------------------
*   Apr 10/20  J.H.Fernandez & N.E.Gaona   Initial implementation
*
*******************************************************************************/

void 
Noise_Generator ( NOISE_T *this )
{

int m;
double min, max, off; 

m = this->samples;
max = this->Amp_max;
min = this->Amp_min;
off = this->Offset;

double scale;
int *ptr1 = &this->n[0];
double *ptr2 = &this->wave[0];
int i = 0;

for(i = 0; i < m; i++)
{
    *(ptr1+i) = i;
    scale = rand() / (double) RAND_MAX; 
    *(ptr2+i) = (min + scale * ( max - min ))+off;
} /* for */

} /* Noise_Generator */

#endif