#include <stdio.h>
#include <time.h>

/*Prototipos de funciones*/

void usando_int(int, int);
void usando_float(int, int);
void usando_double(int, int);
void usando_long_double(int, int);

int main(int argc, char *argv[])
{  
  int N = 10000, M = 10;
  
  usando_int(N, M);
  
  usando_float(N, M);

  usando_double(N, M);

  usando_long_double(N, M);
  
  return 0;
}

///////////////////////////////////////////////////
/////////  Definiciones de funciones  /////////////
///////////////////////////////////////////////////

void usando_int(int N, int  M)
{
  int i, k;
  double secs;
  clock_t t_ini, t_fin;
  
  int a[N], b[N], c[M], C = 2;

  for(i = 0; i <= N-1; i++)
    b[i] = 5;
  
  for(k = 0; k <= M-1; k++)
    c[k] = 2;

  
  t_ini = clock();
  for (i = 0; i <= N-1; i++ )
    a[i] = b[i] * C;
  t_fin = clock();
  secs = (double)(t_fin - t_ini)/CLOCKS_PER_SEC;
  printf("\nUsando int tenemos %.16g y ", secs * 1000.0);

   
  t_ini = clock();  
  for(k = 0; k <= M-1; k++)
    for(i = 0; i <= N-1; i++)
      a[i] = b[i] * c[k];
  t_fin = clock();  
  secs = (double)(t_fin - t_ini)/CLOCKS_PER_SEC;
  printf("%.16g milisegundos, respectivamente.\n", secs * 1000.0);
 
}

void usando_float(int N, int M)
{
  int i, k;
  double secs;
  clock_t t_ini, t_fin;
  
  float a[N], b[N], c[M], C = 2;

  for(i = 0; i <= N-1; i++)
    b[i] = 5;
  
  for(k = 0; k <= M-1; k++)
    c[k] = 2;

  
  t_ini = clock();
  for (i = 0; i <= N-1; i++ )
    a[i] = b[i] * C;
  t_fin = clock();
  secs = (double)(t_fin - t_ini)/CLOCKS_PER_SEC;
  printf("Usando float tenemos %.16g y ", secs * 1000.0);

  
  t_ini = clock(); 
  for(k = 0; k <= M-1; k++)
    for(i = 0; i <= N-1; i++)
      a[i] = b[i] * c[k];
  t_fin = clock();  
  secs = (double)(t_fin - t_ini)/CLOCKS_PER_SEC;
  printf("%.16g milisegundos, respectivamente.\n", secs * 1000.0);
 
}

void usando_double(int N, int M)
{
  int i, k;
  double secs;
  clock_t t_ini, t_fin;

  double a[N], b[N], c[M], C = 2;

  for(i = 0; i <= N-1; i++)
    b[i] = 5;
  
  for(k = 0; k <= M-1; k++)
    c[k] = 2;

  
  t_ini = clock();
  for (i = 0; i <= N-1; i++ )
    a[i] = b[i] * C;
  t_fin = clock();
  secs = (double)(t_fin - t_ini)/CLOCKS_PER_SEC;
  printf("Usando double tenemos %.16g y ", secs * 1000.0);

  
  t_ini = clock(); 
  for(k = 0; k <= M-1; k++)
    for(i = 0; i <= N-1; i++)
      a[i] = b[i] * c[k];
  t_fin = clock();  
  secs = (double)(t_fin - t_ini)/CLOCKS_PER_SEC;
  printf("%.16g milisegundos, respectivamente.\n", secs * 1000.0);
 
}

void usando_long_double(int N, int M)
{
  int i, k;
  double secs;
  clock_t t_ini, t_fin;
  
  long double a[N], b[N], c[M], C = 2;

  for(i = 0; i <= N-1; i++)
    b[i] = 5;
  
  for(k = 0; k <= M-1; k++)
    c[k] = 2;

  
  t_ini = clock();
  for (i = 0; i <= N-1; i++ )
    a[i] = b[i] * C;
  t_fin = clock();
  secs = (double)(t_fin - t_ini)/CLOCKS_PER_SEC;
  printf("Usando long double tenemos %.16g y ", secs * 1000.0);

  
  t_ini = clock();
  for(k = 0; k <= M-1; k++)
    for(i = 0; i <= N-1; i++)
      a[i] = b[i] * c[k];
  t_fin = clock();  
  secs = (double)(t_fin - t_ini)/CLOCKS_PER_SEC;
  printf("%.16g milisegundos, respectivamente.\n", secs * 1000.0);
  printf("\n");
  
}
