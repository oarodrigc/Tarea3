/* File: problem15.c                                                          */
/* Author: Oscar Andrés Rodríguez                                             */
/* Description: This program  executes the product of two matrices in three   */
/*              different ways in  order to  analize  efects of spatial and   */
/*              temporal locality. The measurements are displayed in screen   */

#include <stdio.h>
#include <time.h>
#define N 100

int main(void)
{
  double secs;
  clock_t t_ini, t_fin;
  
  int i, j, k;
  int a [N][N];
  int b [N][N];
  int c [N][N];

  for(i = 0; i <= N-1; i++)  
    for(j = 0; j <= N-1; j++){
      
      b[i][j] = i*j;
      a[i][j] = i+j;
      c[i][j] = 0;
    }

  /* Case "a" */

  t_ini = clock();
  
  for(i = 0; i <= N-1; i++)
    for(j = 0; j <= N-1; j++)
      for(k = 0; k <= N-1; k++)
	
	c[i][j] += a[i][k] * b[k][j];

  t_fin = clock();

  secs = (double)(t_fin - t_ini)/CLOCKS_PER_SEC;

  printf("\nCase 'a': measured time is %.16g miliseconds.\n", secs * 1000.0);

  /* Case "b" */

  t_ini = clock();

  for(i = 0; i <= N-1; i++)
    for(k = 0; k <= N-1; k++)
      for(j = 0; j <= N-1; j++)

	c[i][j] += a[i][k] * b[k][j];

  t_fin = clock();

  secs = (double)(t_fin - t_ini)/CLOCKS_PER_SEC;

  printf("Case 'b': measured time is %.16g miliseconds.\n", secs * 1000.0);

  /* Caso "c" */

  t_ini = clock();

  for(k = 0; k <= N-1; k++)
    for(i = 0; i <= N-1; i++)
      for(j = 0; j <= N-1; j++)

	c[i][j] += a[i][k] * b[k][j];

  t_fin = clock();

  secs = (double)(t_fin - t_ini)/CLOCKS_PER_SEC;

  printf("Case 'c': measured time is %.16g miliseconds.\n", secs * 1000.0);
  printf("\n");
  
  
  return 0;
}
