/* File: problem3.c                                                           */
/* Author: Oscar Andrés Rodríguez                                             */
/* Description: This program receives a non-zero integer number and return    */
/*              the number of times that this can be divided by 2. The result */
/*              is shown in screen. COMPLETE!!                                */

#include <stdio.h>

int main(void)
{
  int N, n, m, counter1 = 0, counter2 = 0;
  
  printf("\nEnter an integer number different from 0.\n");
  scanf("%d", &N);

  while (N == 0){
    printf("\nThe entered integer must be non-zero. Try again.\n");
    scanf("%d", &N);
  }
  
  if (N < 0)
    N = -N;
  
  switch (N){
    
  case 1:
    printf("\n1 is not divisible by 2.\n\n");
    break;
    
  case 2:
    printf("\n2 is divisible by 2 once.\n\n");
    break;
    
  default:
    n = N;
    
    while (n >= 2){
      m = n;
      
      while(m > 1){
	counter1++;
	m = m - 2;
      }
      
      counter2++;
      n = counter1;
      counter1 = 0;
    }
    
    printf("\n%d is divisible by two %d times.\n\n", N, counter2);
  break;
  }
  
  return 0;
}
