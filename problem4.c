/* File: problem4.c                                                           */
/* Author: Oscar Andrés Rodríguez                                             */
/* Description: This program  calculates  the  factorial  of a non-negative   */
/*              integer number. The result is displayed in screen.COMPLETE!!  */

#include <stdio.h>

int main(void)
{
  int N, i, fact = 1;
  
  printf("Enter a non-negative integer.\n");
  scanf("%d", &N);

  while (N < 0){
    printf("The factorial of a negative number is not defined. Try again.\n");
    scanf("%d", &N);
  }
  
  if (N > 0){
    
    for(i = 1; i <= N ; i++)
      fact *= i; 
  }
  
  printf("\n%d! = %d\n\n", N, fact);
    
  return 0;
}
