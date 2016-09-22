#include <stdio.h>
#include <math.h>
#include <time.h>
#define M 100000000

int main(void)
{
  int i, N;
  double alpha, c, s;
  double secs1, secs2, t1, t2, x, y;
  clock_t t_ini, t_fin; 
  FILE * cfPtr = NULL;

  x = 37.8; y = -69.3; alpha = 0.7898312565;
  
  cfPtr = fopen("iterationsVsTime.dat", "w");

  for (N = 0; N <= M; N += 1000000){ 
    
    /* Unoptimized implementation */

    t1 = 1000; t2 = 1500;

    t_ini = clock();
    
    for(i = 0; i <= N; i++){
      t1 = sin(alpha) * t1 + cos(alpha) * t2;
      t2 = -cos(alpha)* t1 + sin(alpha) * t2;
    }
    
    t_fin = clock();    
  
    secs1 = (double)(t_fin - t_ini)/CLOCKS_PER_SEC;
  
    /* Optimized implementation */

    t1 = 1000; t2 = 1500;
    
    t_ini = clock();
  
    s = sin(alpha);
    c = cos(alpha);
  
    for(i = 0; i <= N; i++){
      t1 = s * t1 + c * t2;
      t2 = -c * t1 + s * t2;
    }
  
    t_fin = clock();
  
    secs2 = (double)(t_fin - t_ini)/CLOCKS_PER_SEC;

    fprintf(cfPtr, "%d  %.18lf  %.18lf\n", N, secs1, secs2);
  }
  
  fclose(cfPtr);
  
  return 0;
}
