/* File: problem9.c                                                           */
/* Author: Oscar Andrés Rodríguez                                             */
/* Description: This program evaluates the relativistic mass of a particle of */
/*              rest mass 1 kg as a function of its velocity. The program re- */
/*              receives a stepsize dv for the velocity and  generates a data */
/*              file (velocityVsMass.dat) in which the velocity of the parti- */
/*              cle and its relativistic mass are tabulated.                  */

#include <stdio.h>
#include <math.h>

double mass(double, double);

int main(void)
{
  double m0 = 1;       //rest mass measured in kg 
  double v0 = 0;       //initial velocity measured in km/s
  double c = 300000;   //light speed
  double v;            //velocity
  double dv;           //velocity stepsize
  double m;            //mass
  int N;               //number of subintervals           
  int i;
  double beta; 
  FILE *cfPtr = NULL;
  
  printf("Enter the stepsize for the velocity in km/s.\n");
  scanf("%lf", &dv);

  while (dv <= 0){
    printf("The stepsize must be positive. Try again.\n");
    scanf("%lf", &dv);
  }
  
  N = (int)((c - v0)/dv);
  
  cfPtr = fopen("velocityVsMass.dat", "w");

  for(i = 0; i < N; i++){
    v = v0 + i*dv;
    beta = v/c;
    m = mass(m0, beta);
    fprintf(cfPtr, "%10.1lf%14lf%14lf\n", v, beta, m);
  }

  fclose(cfPtr);

  printf("The file velocityVsMass.dat has been generated.\n\n"); 

  return 0;
}


/*This function calculates the relativistic mass as a function of the velocity*/
double mass(double m0, double beta)
{
  double M;

  M = m0/sqrt(1 - pow(beta,2));

  return M;
}
