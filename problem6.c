/* File: problem6.c                                                           */
/* Author: Oscar Andrés Rodríguez                                             */
/* Description: This program evaluates the function f(x)=sin(x)ln(2x+1)sinh(x)*/
/*              in the interval [0,10]. The program receives  the  stepsize dx*/
/*              and generates  two data files: ixf.dat, in which the values of*/
/*              i in x = i*dx, x and f(x) are stored, and fx.dat, in which the*/
/*              values f(x) and x are printed.                                */

#include <stdio.h>
#include <math.h>

void printing(double, int, double, double);
void reading(int);

int main(void)
{
  int N;                 //number of subintervals
  double dx;             //stepsize
  double a = 0, b = 10;  //interval limits
  
  printf("Enter the stepsize.\n");
  scanf("%lf", &dx);

  while (dx <= 0){
    printf("The stepsize must be positive. Try again.\n");
    scanf("%lf", &dx);
  }
  
  N = (int)((b-a)/dx);   
  
  printing(dx, N, a, b);    
  printf("\nFile ixf.dat has been generated.\n");

  reading(N);
  printf("File fx.dat has been generated.\n\n");
  
  return 0;
}


//////////////////////////////////////////////////////////
/////////////  Definición de funciones   /////////////////
//////////////////////////////////////////////////////////

/* Function to print data in a file */
void printing(double dx, int N, double a, double b)
{
  int i;
  double x, f;
  FILE *cfPtr = NULL;

  cfPtr = fopen("ixf.dat", "w");
  
  for(i = 0; i <= N; i++){
    x = a + i * dx;
    f = sin(x) * log(2*x+1) * sinh(x);
    fprintf(cfPtr, "%4d%11lf%15lf\n", i, x, f);
  }

  fclose(cfPtr);

}

/* Function to read dato from a file. */
void reading(int M)
{
  int j, I[M];
  double X[M], Y[M];
  FILE *cfPtr = NULL;
  FILE *dfPtr = NULL;
  
  cfPtr = fopen("ixf.dat", "r");
  dfPtr = fopen("fx.dat", "w");

  for(j = 0; j <= M-1; j++){
    fscanf(cfPtr,"%d%lf%lf", &I[j], &X[j], &Y[j]);
    fprintf(dfPtr,"%15lf%11lf\n", Y[j], X[j]);
  }

  fclose(cfPtr);
  fclose(dfPtr);
}
