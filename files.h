/* Ruler 1         2         3         4         5         6         7        */

/******************************************************************************/
/*                                                                            */
/*             /$$$$$$$$  /$$$$$$  /$$        /$$$$$$$$   /$$$$$$             */
/*            | $$_____/ |_  $$_/ | $$       | $$_____/  /$$__  $$            */
/*            | $$         | $$   | $$       | $$       | $$  \__/            */
/*            | $$$$$      | $$   | $$       | $$$$$    |  $$$$$$             */
/*            | $$__/      | $$   | $$       | $$__/     \____  $$            */
/*            | $$         | $$   | $$       | $$        /$$  \ $$            */
/*            | $$        /$$$$$$ | $$$$$$$$ | $$$$$$$$ |  $$$$$$/            */
/*            |__/       |______/ |________/ |________/  \______/             */
/*                                                                            */
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

/**********************************  CSV.h  ***********************************/
/*                                                                            */
/*   Purpose: Export data in CSV files                                        */
/*                                                                            */
/*   Origin:  Developed by Jhon Fernandez & Nicolas Gaona, Apr 25th, 2020     */
/*                                                                            */
/*   Notes:   None                                                            */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/*                                                                            */
/*    CSV.h was designed for generate CSV with data of one wave.              */
/*                                                                            */
/*    Copyright (C) 2020 Jhon Hader Fernandez & Nicolas Eduardo Gaona         */
/*                                                                            */
/*    This file is part of monitoring and quality of power consumption.       */
/*                                                                            */
/******************************************************************************/

#ifndef FILES_H
#define FILES_H

/************************** Definition of Libraries ***************************/

#include <string.h>

/************************** Definition of functions ***************************/

/*FN****************************************************************************
*
*   void CSV_Export( int m, int fs, int n[], double wave[] )
*
*   Parameters:  
*  
*    - n[]:    Pointer to data samples array to export
*    - wave[]: Pointer to data wave's value array to export
*    - m:  Length of file (samples to export)
*    - fs: Sampling frequency (Needed for this project, to export time)
* 
*   Return:  Nothing
*
*   Purpose: Export data in CSV file
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
CSV_Export( char *filename, int m, int fs, int n[], double wave[] )
{

int *ptr1 = &n[0];
double *ptr2 = &wave[0];
FILE *fp;
double t = 0;
int i = 0;

printf("\nCreating file: %s_t.csv",filename);

strcat(filename,"_t.csv");
fp = fopen(filename,"w+");
fprintf(fp,"Sample,Time(s),Value");

for(i = 0; i < m; i++)
{
    t = (*(ptr1 + i))*((float)1/(float)fs);
    fprintf(fp,"\n%d,%lf,%lf",*(ptr1 + i), t,*(ptr2 + i));
}

fclose(fp);
printf("\nFile was created successfully\n");

}

/******************************************************************************/

void 
CSV_Export_f( char *filename, int m, double f[], double mag[] )
{

double *ptr1 = &f[0];
double *ptr2 = &mag[0];
FILE *fp;
int i = 0;
char *token;

token = strtok(filename,"_");


printf("Creating file: %s_f.csv",token);

strcat(token,"_f.csv");
fp = fopen(token,"w+");
fprintf(fp,"Freq(Hz),Magnitude\n");

for(i = 0; i < m; i++)
{

fprintf(fp,"%.*e\t%.*e\n",16, *(ptr1+i), 16, *(ptr2+i) );
}

fclose(fp);
printf("\nFile was created successfully\n");

}

#endif /* FILES_H */