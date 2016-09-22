#include <stdio.h>
#include <time.h>

main(int argc, char *argv[])
{
  /*Declaración de variables*/

  double secs;
  clock_t t_ini, t_fin;
  
  int i, j, k;
  int N = 100;
  int a [N][N];
  int b [N][N];
  int c [N][N];

  /*Inicialización de matrices*/

  for(i = 0; i <= N-1; i++)  
    for(j = 0; j <= N-1; j++){
      
      b[i][j] = i*j;
      a[i][j] = i+j;
      c[i][j] = 0;
    }

  /*Caso "a"*/

  t_ini = clock();
  
  for(i = 0; i <= N-1; i++)
    for(j = 0; j <= N-1; j++)
      for(k = 0; k <= N-1; k++)
	
	c[i][j] += a[i][k] * b[k][j];

  t_fin = clock();

  secs = (double)(t_fin - t_ini)/CLOCKS_PER_SEC;

  printf("\nEn el caso (a) el tiempo es de %.16g milisegundos\n", secs * 1000.0);

  /*Caso "b"*/

  t_ini = clock();

  for(i = 0; i <= N-1; i++)
    for(k = 0; k <= N-1; k++)
      for(j = 0; j <= N-1; j++)

	c[i][j] += a[i][k] * b[k][j];

  t_fin = clock();

  secs = (double)(t_fin - t_ini)/CLOCKS_PER_SEC;

  printf("En el caso (b) el tiempo es de %.16g milisegundos\n", secs * 1000.0);

  /*Caso "c"*/

  t_ini = clock();

  for(k = 0; k <= N-1; k++)
    for(i = 0; i <= N-1; i++)
      for(j = 0; j <= N-1; j++)

	c[i][j] += a[i][k] * b[k][j];

  t_fin = clock();

  secs = (double)(t_fin - t_ini)/CLOCKS_PER_SEC;

  printf("En el caso (c) el tiempo es de %.16g milisegundos\n", secs * 1000.0);
  printf("\n");
  
  
  return 0;
}
