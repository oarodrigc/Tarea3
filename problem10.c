/* File: problem10.c                                                        */
/* Author: Oscar Andrés Rodríguez                                           */
/* Description: This program computes the pi number using two different appro-*/
/*              ximations. The program receives the number of terms N for the */
/*              expansions and prints in screen the obtained values.          */

#include <stdio.h>
#include <math.h>

void piApproximation1(int);
void piApproximation2(int);

int main(void)
{
  int N;     
  
  printf("Enter the numbers of terms in the expansions.\n");
  scanf("%d", &N);

  while (N <= 0){
    printf("The number of terms must be positive!. Try again.\n");
    scanf("%d", &N);
  }
    
  piApproximation1(N);     
  piApproximation2(N);
  
  return 0;
}

///////////////////////////////////////////////////
/////////  Definición de funciones  ///////////////
///////////////////////////////////////////////////

/* pi number as a succession */
void piApproximation1(int N)
{
  double x = 1, y = 0, pi;
  int i;

  for(i = 0; i <= N-1; i++){
    y = sqrt(2 + y);
    x *= (0.5*y);
  }

  pi = 2/x;

  printf("pi1 = %.10lf\n", pi);

}

/*Cálculo de pi mediante series*/
void piApproximation2(int N)
{
  double x, y = 0, pi;
  int i;
    
  for (i = 0; i <= N-1; i++){
    x = pow(-1,i) * (2*i+1);
    y = y + 1.0/x;
  }

  pi = 4 * y;

  printf("pi2 = %.10lf\n", pi);
    
}
