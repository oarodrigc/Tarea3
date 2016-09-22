/* File: problem2.c                                                           */
/* Author: Oscar Andrés Rodríguez                                             */
/* Description: This program uses of the Taylor series of the cosine function */
/*              to calculate the sine of an angle. The  program  receives  an */
/*              angle x mesured in degrees and the number  of terms  N of the */
/*              expansion and return cos(x). The result is shown in screen.   */

#include <stdio.h>
#include <math.h>

int main(void)
{  
  int N, i, factorial = 1;
  double x, xRad, w, w2, cosx, conversionFactor = M_PI/180;

  printf("Enter the angle mesured in degrees.\n");
  scanf("%lf", &x);
  printf("Enter the number of terms of the series.\n");
  scanf("%d", &N);
  
  while (N < 1){
    printf("The entered value is wrong. This value must be an integer greater"
           "than zero. \nTry again.\n");
    scanf("%d", &N);
  }
  
  xRad = conversionFactor * x; //degrees-to-radians-conversion is performed.

  cosx = 1.0; //at first order (N = 1)
  w = 1.0;
  w2 = xRad * xRad;
  
  if (N > 1){
    
    for(i = 1; i < N; i++){
      
      w *= -w2; //even powers of x in radians
      factorial = factorial*(2*i)*(2*i-1);
      cosx = cosx + w/factorial;
    }
    
  }

  printf("cos(%f) =  %.10f\n", x, cosx);    
  
  return 0;     
}
  
