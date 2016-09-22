#include <stdio.h>
#include <math.h>
#include <time.h>

main(int argc, char *argv[])
{
  /*Declaración de variables*/
  
  int loop, i;
  double secs;
  clock_t t_ini, t_fin;
  
  int N = 100000;
  double x[N], y[N], z[N];

  /*Inicialización de arreglos*/
  
  for(i = 0; i <= N-1; i++){
    x[i] = 3.7;
    y[i] = -2.8;
  }

  /*Primera implementación*/
  
  t_ini = clock();

  for(loop = 0; loop <= 10; loop++)
    for(i = 0; i < N-1; i++)
      z[i] = pow(x[i], y[i]);

  t_fin = clock();

  secs = (double)(t_fin - t_ini)/CLOCKS_PER_SEC;

  printf("%.16g milisegundos\n", secs * 1000.0);

  /*Segunda implementación*/
  
  t_ini = clock();

  for(i = 0; i <= 10; i++)
    for(loop = 0; loop < N-1; loop++)
      z[i] = pow(x[i], y[i]);

  t_fin = clock();

  secs = (double)(t_fin - t_ini)/CLOCKS_PER_SEC;

  printf("%.16g milisegundos\n", secs * 1000.0);

  return 0;
}
