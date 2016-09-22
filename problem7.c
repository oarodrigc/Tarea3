/* File: problem7.c                                                           */
/* Author: Oscar Andrés Rodríguez                                             */
/* Description: This program evaluates (sin(x)+cos(x))(a+b)/2 in several ways */
/*              or versions in order to study the precedece of the operators. */
/*              In this program 4 possible forms to write the above expresion */
/*              are considered.                                               */

#include <stdio.h>
#include <math.h>

double functionVersion1(double, double, double);
double functionVersion2(double, double, double);
double functionVersion3(double, double, double);
double functionVersion4(double, double, double);
  
int main(void)
{
  double x, a, b;

  printf("ingrese el valor de x: ");
  scanf("%lf", &x);
  printf("\ningrese el valor de a: ");
  scanf("%lf", &a);
  printf("\ningrese el valor de b: ");
  scanf("%lf", &b);
  printf("\n");

  printf("f1(x) = %lf\n", functionVersion1(x, a, b));
  printf("f2(x) = %lf\n", functionVersion2(x, a, b));
  printf("f3(x) = %lf\n", functionVersion3(x, a, b));
  printf("f4(x) = %lf\n", functionVersion4(x, a, b));
  
  return 0;
}


/////////////////////////////////////////////////////
/////////// Definición de funciones /////////////////
/////////////////////////////////////////////////////

/* Definition of the version 1 of the function */
double functionVersion1(double x, double a, double b){
  
  return sin(x)+cos(x)/2 * a + b;
}

/* Definition of the version 2 of the function */
double functionVersion2(double x, double a, double b){
  
  return sin(x)+cos(x)/2 * (a + b);
}

/* Definition of the version 3 of the function */
double functionVersion3(double x, double a, double b){
  
  return (sin(x)+cos(x)/2) * a + b;
}

/* Definition of the version 4 of the function */
double functionVersion4(double x, double a, double b){
  
  return ((sin(x)+cos(x))/2) * (a + b);
}
