/* File: problem1.c                                                         */
/* Author: Oscar Andrés Rodríguez                                           */
/* Description: This program uses of the Taylor series of the sine function */
/*              to calculate the sine of an angle. The program receives  an */ 
/*              angle x mesured in degrees and the number of terms N of the */
/*              expansion and return sin(x). The result is shown in screen. */

#include <stdio.h>
#include <math.h>

int main(void)
{
  int i, N, factorial = 1;
  double conversionFactor = M_PI/180;
  double x, xRad, w, w2, sinx;

  printf("Enter the angle in degrees.\n");
  scanf("%lf", &x);
  printf("Enter the number of terms of the Taylor series.\n");
  scanf("%d", &N);
  
  while (N <= 0){
    printf("The entered value is wrong. This value must be greater than zero."
	   "\nTry again.\n");
    scanf("%d", &N);
  }

  xRad = conversionFactor * x; //degrees-to-radians-conversion is performed.
  
  sinx = xRad; //at first order (N = 1) 
  w = xRad;
  w2 = xRad * xRad;
  
  if (N > 1){
    
    for(i = 1; i < N; i++){
      
      w *= -w2;   //odd powers of x in radians
      factorial = factorial*(2*i)*(2*i+1);
      sinx = sinx + w/factorial;
      
    }
    
  }
    
  printf("sin(%lf) = %.10lf\n", x, sinx);    

  return 0;     
}
  
