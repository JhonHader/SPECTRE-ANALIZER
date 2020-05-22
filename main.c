/* Ruler 1         2         3         4         5         6         7        */

/*******************************************************************************
*                                                                              *
*     /$$$$$$  /$$$$$$$  /$$$$$$$$  /$$$$$$  /$$$$$$$$ /$$$$$$$  /$$$$$$$$     *
*    /$$__  $$| $$__  $$| $$_____/ /$$__  $$|__  $$__/| $$__  $$| $$_____/     *
*   | $$  \__/| $$  \ $$| $$      | $$  \__/   | $$   | $$  \ $$| $$           *
*   |  $$$$$$ | $$$$$$$/| $$$$$   | $$         | $$   | $$$$$$$/| $$$$$        *
*    \____  $$| $$____/ | $$__/   | $$         | $$   | $$__  $$| $$__/        *
*    /$$  \ $$| $$      | $$      | $$    $$   | $$   | $$  \ $$| $$           *
*   |  $$$$$$/| $$      | $$$$$$$$|  $$$$$$/   | $$   | $$  | $$| $$$$$$$$     *
*    \______/ |__/      |________/ \______/    |__/   |__/  |__/|________/     *
*                                                                              *
*     /$$$$$$ /$$   /$$ /$$$$$$ /$$      /$$$$$$/$$$$$$$$/$$$$$$$$/$$$$$$$     *
*    /$$__  $| $$$ | $$/$$__  $| $$     |_  $$_|_____ $$| $$_____| $$__  $$    *
*   | $$  \ $| $$$$| $| $$  \ $| $$       | $$      /$$/| $$     | $$  \ $$    *
*   | $$$$$$$| $$ $$ $| $$$$$$$| $$       | $$     /$$/ | $$$$$  | $$$$$$$/    *
*   | $$__  $| $$  $$$| $$__  $| $$       | $$    /$$/  | $$__/  | $$__  $$    *
*   | $$  | $| $$\  $$| $$  | $| $$       | $$   /$$/   | $$     | $$  \ $$    *
*   | $$  | $| $$ \  $| $$  | $| $$$$$$$$/$$$$$$/$$$$$$$| $$$$$$$| $$  | $$    *
*   |__/  |__|__/  \__|__/  |__|________|______|________|________|__/  |__/    *
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

#include "alloc.h"
#include "complex.h"
#include "f_domain.h"
#include "sine.h"
#include "pulse.h"
#include "sawtooth.h"
#include "noise.h"
#include "waves.h"
#include "files.h"

/****************************  Definition of main  ****************************/

/*FN****************************************************************************
*
*   int main()
*
*   Purpose: Espectre analizer.
*
*   Plan:
*           Part 1: Generate signals
*           Part 2: Set signal to COMPLEX type
*           Part 3: Compute the FFT
*
*   Register of Revisions:
*
*   DATE         RESPONSIBLE           COMMENT
*   -----------------------------------------------------------------------
*   May 01/2020  Fernandez & Gaona     Implementation
*
*******************************************************************************/
#define TAM_MAXIMO 10

void interactive();

/******************************************************************************/

int main(){

char end[2];

while( strcmp(end,"y") != 0 ){
  interactive();
  printf("\nFinished? [y/n]: ");
  scanf("%s", end);
}

printf("Finished! Thanks!\n\n");

} /* main */


/*FN****************************************************************************
*
*   void iteractive()
*
*   Purpose: Espectre analizer.
*
*   Plan:
*           Part 1: Generate signals
*           Part 2: Set signal to COMPLEX type
*           Part 3: Compute the FFT
*
*   Register of Revisions:
*
*   DATE         RESPONSIBLE           COMMENT
*   -----------------------------------------------------------------------
*   May 01/2020  Fernandez & Gaona     Implementation
*
*******************************************************************************/
void 
interactive()
{
typedef struct {
    char HELP_COM[TAM_MAXIMO];
    char SINE_COM[TAM_MAXIMO];
    char SAWTOOTH_COM[TAM_MAXIMO];
    char PULSE_COM[TAM_MAXIMO];
    char NOISE_COM[TAM_MAXIMO];
} SIGNALS;

SIGNALS signal_command = { 
  .HELP_COM = "HELP",
  .SINE_COM = "SINE",
  .SAWTOOTH_COM = "SAWTOOTH",
  .PULSE_COM = "PULSE",
  .NOISE_COM = "NOISE"
};

char signal_input[TAM_MAXIMO];

printf("\nSignal Input: \n");
scanf("%s", signal_input);

/******************************************************************************/
if( strcmp(signal_input, signal_command.SINE_COM) == 0 ){
  
  int samples, freq, freq_sam;
  double Amp, off;
  char filename[TAM_MAXIMO];
  int i = 0;

scanf("%d %d %d %lf %lf %s", &samples, &freq, &freq_sam, &Amp, &off, filename);

  SINE_T *object = SINE_New();
  SINE_Set( object, samples, freq, freq_sam, Amp, off );

  Sine_Generator( object );

  int *samples_vec_ptr = SINE_Get_Samples_Vec( object );
  double *value_wave_vec_ptr = SINE_Get_Wave_Vec( object );

CSV_Export( filename, samples, freq_sam, samples_vec_ptr, value_wave_vec_ptr );

  static COMPLEX_T *my_signal;
  Dynamic_Vector(my_signal, samples, COMPLEX_T);

  for( i = 0; i < samples; i++ ){
    my_signal[i].real = *(value_wave_vec_ptr + i);
  }

  int direction = FORWARD;

int power = Find_Power( samples );
double *df, *mag;

Dynamic_Vector(df, samples, double);
Dynamic_Vector(mag, samples, double);

Compute_FFT( direction, power, my_signal );

for( i = 0; i < samples/2; i++ ){
  df[i] = (((double)i / (double)samples )*(double)freq_sam);
  mag[i] = cplx_Magnitude( my_signal[i] );
}

strcat(filename, "_freq");

CSV_Export_f( filename, samples/2, df, mag );

Free_Dynamic_Vector( object );
Free_Dynamic_Vector( df );
Free_Dynamic_Vector( mag );
Free_Dynamic_Vector( my_signal );

}

/******************************************************************************/
else if ( strcmp(signal_input, signal_command.SAWTOOTH_COM) == 0 ){

  int samples, freq, freq_sam;
  double A_top, A_bott, off;
  char filename[TAM_MAXIMO];
  int i = 0;

scanf("%d %d %d %lf %lf %lf %s", &samples, &freq, &freq_sam, &A_top, &A_bott, &off, filename);

  SAWTOOTH_T *object = SAWTOOTH_New();
  SAWTOOTH_Set( object, samples, freq, freq_sam, A_top, A_bott, off );

  Sawtooth_Generator( object );

  int *samples_vec_ptr = SAWTOOTH_Get_Samples_Vec( object );
  double *value_wave_vec_ptr = SAWTOOTH_Get_Wave_Vec( object );

CSV_Export( filename, samples, freq_sam, samples_vec_ptr, value_wave_vec_ptr );

  static COMPLEX_T *my_signal;
  Dynamic_Vector(my_signal, samples, COMPLEX_T);

  for( i = 0; i < samples; i++ ){
    my_signal[i].real = *(value_wave_vec_ptr + i);
  }

  int direction = FORWARD;

int power = Find_Power( samples );
double *df, *mag;

Dynamic_Vector(df, samples, double);
Dynamic_Vector(mag, samples, double);

Compute_FFT( direction, power, my_signal );

for( i = 0; i < samples/2; i++ ){
  df[i] = (((double)i / (double)samples )*(double)freq_sam);
  mag[i] = cplx_Magnitude( my_signal[i] );
}

strcat(filename, "_freq");

CSV_Export_f( filename, samples/2, df, mag );

Free_Dynamic_Vector( object );
Free_Dynamic_Vector( df );
Free_Dynamic_Vector( mag );
Free_Dynamic_Vector( my_signal );

}

/******************************************************************************/
else if ( strcmp(signal_input, signal_command.PULSE_COM) == 0 ){

  int samples, freq, freq_sam;
  double A, duty_cy, off;
  char filename[TAM_MAXIMO];
  int i = 0;

scanf("%d %d %d %lf %lf %lf %s", &samples, &freq, &freq_sam, &A, &duty_cy, &off, filename);

  PULSE_T *object = PULSE_New();
  PULSE_Set( object, samples, freq, freq_sam, A, duty_cy, off );

  Pulse_Generator( object );

  int *samples_vec_ptr = PULSE_Get_Samples_Vec( object );
  double *value_wave_vec_ptr = PULSE_Get_Wave_Vec( object );

CSV_Export( filename, samples, freq_sam, samples_vec_ptr, value_wave_vec_ptr );

  static COMPLEX_T *my_signal;
  Dynamic_Vector(my_signal, samples, COMPLEX_T);

  for( i = 0; i < samples; i++ ){
    my_signal[i].real = *(value_wave_vec_ptr + i);
  }

  int direction = FORWARD;

int power = Find_Power( samples );
double *df, *mag;

Dynamic_Vector(df, samples, double);
Dynamic_Vector(mag, samples, double);

Compute_FFT( direction, power, my_signal );

for( i = 0; i < samples/2; i++ ){
  df[i] = (((double)i / (double)samples )*(double)freq_sam);
  mag[i] = cplx_Magnitude( my_signal[i] );
}

strcat(filename, "_freq");

CSV_Export_f( filename, samples/2, df, mag );

Free_Dynamic_Vector( object );
Free_Dynamic_Vector( df );
Free_Dynamic_Vector( mag );
Free_Dynamic_Vector( my_signal );

}

/******************************************************************************/
else if ( strcmp(signal_input, signal_command.NOISE_COM) == 0 ){
  
  int samples, freq_sam;
  double max, min, off;
  char filename[TAM_MAXIMO];
  int i = 0;

scanf("%d %d %lf %lf %lf %s", &samples, &freq_sam, &max, &min, &off, filename);

  NOISE_T *object = NOISE_New();
  NOISE_Set( object, samples, max, min, off );

  Noise_Generator( object );

  int *samples_vec_ptr = NOISE_Get_Samples_Vec( object );
  double *value_wave_vec_ptr = NOISE_Get_Wave_Vec( object );

CSV_Export( filename, samples, freq_sam, samples_vec_ptr, value_wave_vec_ptr );

  static COMPLEX_T *my_signal;
  Dynamic_Vector(my_signal, samples, COMPLEX_T);

  for( i = 0; i < samples; i++ ){
    my_signal[i].real = *(value_wave_vec_ptr + i);
  }

  int direction = FORWARD;

int power = Find_Power( samples );
double *df, *mag;

Dynamic_Vector(df, samples, double);
Dynamic_Vector(mag, samples, double);

Compute_FFT( direction, power, my_signal );

for( i = 0; i < samples/2; i++ ){
  df[i] = (((double)i / (double)samples )*(double)freq_sam);
  mag[i] = cplx_Magnitude( my_signal[i] );
}

strcat(filename, "_freq");

CSV_Export_f( filename, samples/2, df, mag );

Free_Dynamic_Vector( object );
Free_Dynamic_Vector( df );
Free_Dynamic_Vector( mag );
Free_Dynamic_Vector( my_signal );

}
/******************************************************************************/
else if ( strcmp(signal_input, signal_command.HELP_COM) == 0 ){
  printf("\n\n+---------------------------------------------------------------------+\n");
  printf("|                           COMMAND PARAMETERS                        |\n");
  printf("+---------------------------------------------------------------------+\n");
  printf("|         SINE SAMPLES FREQ FREQ_SAMPLING AMP OFFSET FILENAME         |\n");
  printf("+---------------------------------------------------------------------+\n");
  printf("| SAWTOOTH SAMPLES FREQ FREQ_SAMPLING AMP_TOP AMP_BOT OFFSET FILENAME |\n");
  printf("+---------------------------------------------------------------------+\n");
  printf("|   PULSE SAMPLES FREQ FREQ_SAMPLING AMP DUTY_CYCLE OFFSET FILENAME   |\n");
  printf("+---------------------------------------------------------------------+\n");
  printf("|     NOISE SAMPLES FREQ_SAMPLING AMP_TOP AMP_BOT OFFSET FILENAME     |\n");
  printf("+---------------------------------------------------------------------+\n\n");
}
else{
  printf("\nError 404 not found: Invalid command\n");
  printf("\n +------------------------------+\n");
  printf(" |   SIGNAL COMMAND AVAILABLE   |\n");
  printf(" +------------------------------+\n");
  printf(" |             SINE             |\n");
  printf(" +------------------------------+\n");
  printf(" |           SAWTOOTH           |\n");
  printf(" +------------------------------+\n");
  printf(" |             PULSE            |\n");
  printf(" +------------------------------+\n");
  printf(" |             NOISE            |\n");
  printf(" +------------------------------+\n");
  printf("\nNOTE: Pay attention to capital letter\n");

}

}


/*
COMPILING:

gcc main.c sine.c pulse.c sawtooth.c noise.c f_domain.c complex.c -o main.exe
*/
