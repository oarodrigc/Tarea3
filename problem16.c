#include <stdio.h>
#include <time.h>

/*Prototipos de función*/

double un_term(int [], int[], int);
double dos_term(int [], int[], int);
double tres_term(int [], int[], int);
double cuatro_term(int [], int[], int);
double cinco_term(int [], int[], int);
double seis_term(int [], int[], int);
double diez_term(int [], int[], int);

main(int argc, char *argv[])
{
  int i, N = 720000;
  int a[N], b[N];
  int terms;
  
  double secs;
  
  FILE *cfPtr = NULL;
  
  for(i = 0; i <= N; i++){
    a[i] = 3 * i;
    b[i] = 2 * i - 3;
  }

  cfPtr = fopen("termsVstime.dat", "w");

  /*Con un termino*/  
  terms = 1;
  secs = un_term(a, b, N);
  fprintf(cfPtr, "%d  %.16g\n", terms, secs);

  /*Con dos terminos*/
  terms = 2;
  secs = dos_term(a, b, N);
  fprintf(cfPtr, "%d  %.16g\n", terms, secs * 1000.0);

  /*Con tres terminos*/
  terms = 3;
  secs = tres_term(a, b, N);
  fprintf(cfPtr, "%d  %.16g\n", terms, secs * 1000.0);

  /*Con cuatro terminos*/
  terms = 4;
  secs = cuatro_term(a, b, N);
  fprintf(cfPtr, "%d  %.16g\n", terms, secs * 1000.0);

  /*Con cinco terminos*/
  terms = 5;
  secs = cinco_term(a, b, N);
  fprintf(cfPtr, "%d  %.16g\n", terms, secs * 1000.0);

  /*Con seis terminos*/
  terms = 6;
  secs = seis_term(a, b, N);
  fprintf(cfPtr, "%d  %.16g\n", terms, secs * 1000.0);

  /*Con diez terminos*/
  terms = 10;
  secs = diez_term(a, b, N);
  fprintf(cfPtr, "%d  %.16g\n", terms, secs * 1000.0);

  fclose(cfPtr);

  return 0;

}

///////////////////////////////////////////////////////
/////////// Definición de funciones  //////////////////
///////////////////////////////////////////////////////

double un_term(int a[], int b[], int N)
{
  int i;
  clock_t t_ini, t_fin;
  int s = 0;

  t_ini = clock();

  for(i = 0; i <= N-1; i++)
    s += a[i] * b[i];

  t_fin = clock();

  return (double)(t_fin - t_ini)/CLOCKS_PER_SEC;
}



double dos_term(int a[], int b[], int N)
{
  int i;
  clock_t t_ini, t_fin;
  int s = 0, sum1 = 0, sum2 = 0;

  t_ini = clock();
  
  for(i = 0; i <= N/2 - 1; i++){
    sum1 += a[2 * i] * b[2 * i];
    sum2 += a[2 * i + 1] * b[2 * i + 1];
  }

  s = sum1 + sum2;
  
  t_fin = clock();

 return (double)(t_fin - t_ini)/CLOCKS_PER_SEC;
}


double tres_term(int a[], int b[], int N)
{
  int i;
  clock_t t_ini, t_fin;
  int s = 0, sum1 = 0, sum2 = 0, sum3 = 0;
  
  t_ini = clock();
  
  for(i = 0; i <= N/3 - 1; i++){
    sum1 += a[3 * i] * b[3 * i];
    sum2 += a[3 * i + 1] * b[3 * i + 1];
    sum3 += a[3 * i + 2] * b[3 * i + 2];
  }

  s = sum1 + sum2 + sum3;
  
  t_fin = clock();

  return (double)(t_fin - t_ini)/CLOCKS_PER_SEC;
}


double cuatro_term(int a[], int b[], int N)
{
  int i;
  clock_t t_ini, t_fin;
  int s = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;

  t_ini = clock();
  
  for(i = 0; i <= N/4 - 1; i++){
    sum1 += a[4 * i] * b[4 * i];
    sum2 += a[4 * i + 1] * b[4 * i + 1];
    sum3 += a[4 * i + 2] * b[4 * i + 2];
    sum4 += a[4 * i + 3] * b[4 * i + 3];
  }

  s = sum1 + sum2 + sum3 + sum4;
  
  t_fin = clock();

  return (double)(t_fin - t_ini)/CLOCKS_PER_SEC;
}


double cinco_term(int a[], int b[], int N)
{
  int i;
  clock_t t_ini, t_fin;
  int s = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;
 
  t_ini = clock();
  
  for(i = 0; i <= N/5 - 1; i++){
    sum1 += a[5 * i] * b[5 * i];
    sum2 += a[5 * i + 1] * b[5 * i + 1];
    sum3 += a[5 * i + 2] * b[5 * i + 2];
    sum4 += a[5 * i + 3] * b[5 * i + 3];
    sum5 += a[5 * i + 4] * b[5 * i + 4];
  }

  s = sum1 + sum2 + sum3 + sum4 + sum5;
  
  t_fin = clock();

  return (double)(t_fin - t_ini)/CLOCKS_PER_SEC;
}


double seis_term(int a[], int b[], int N)
{
  int i;
  clock_t t_ini, t_fin;
  int s = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0, sum6 = 0;
  
  t_ini = clock();
  
  for(i = 0; i <= N/6 - 1; i++){
    sum1 += a[6 * i] * b[6 * i];
    sum2 += a[6 * i + 1] * b[6 * i + 1];
    sum3 += a[6 * i + 2] * b[6 * i + 2];
    sum4 += a[6 * i + 3] * b[6 * i + 3];
    sum5 += a[6 * i + 4] * b[6 * i + 4];
    sum6 += a[6 * i + 5] * b[6 * i + 5];
  }

  s = sum1 + sum2 + sum3 + sum4 + sum5 + sum6;
  
  t_fin = clock();

  return (double)(t_fin - t_ini)/CLOCKS_PER_SEC;
}


double diez_term(int a[], int b[], int N)
{
  int i;
  clock_t t_ini, t_fin;
  int s = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0, sum6 = 0, sum7 = 0, sum8 = 0, sum9 = 0, sum10 = 0;
  
  t_ini = clock();
  
  for(i = 0; i <= N/10 - 1; i++){
    sum1 += a[10 * i] * b[10 * i];
    sum2 += a[10 * i + 1] * b[10 * i + 1];
    sum3 += a[10 * i + 2] * b[10 * i + 2];
    sum4 += a[10 * i + 3] * b[10 * i + 3];
    sum5 += a[10 * i + 4] * b[10 * i + 4];
    sum6 += a[10 * i + 5] * b[10 * i + 5];
    sum7 += a[10 * i + 6] * b[10 * i + 6];
    sum8 += a[10 * i + 7] * b[10 * i + 7];
    sum9 += a[10 * i + 8] * b[10 * i + 8];
    sum10 += a[10 * i + 9] * b[10 * i + 9];
  }

  s = sum1 + sum2 + sum3 + sum4 + sum5 + sum6 + sum7 + sum8 + sum9 + sum10;
  
  t_fin = clock();

  return (double)(t_fin - t_ini)/CLOCKS_PER_SEC;
}

