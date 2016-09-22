/* File: problem5.c                                                           */
/* Author: Oscar Andrés Rodríguez                                             */
/* Description: This program simulates a calculator. It receives two operands */
/*              and one character denoting an arithmetic operation.The result */
/*              is displayed in screen.                                       */

#include <stdio.h>

double sum(double, double);
double subtraction(double, double);
double multiplication(double, double);
double division(double, double);

int main(void)
{  
  double operand1, operand2;     
  char operator[2];              
  
  printf("Enter the first operand.\n");
  scanf("%lf", &operand1);
  printf("Enter the operator (+, -, *, /).\n");
  scanf("%s", operator);

  while((operator[0] != '+')&(operator[0] != '-')&(operator[0] != '*')&(operator[0] != '/')){
    
    printf("Error. Invalid operator. Try again\n");
    scanf("%s", operator);
  }
  
  printf("Enter the second operand.\n");
  scanf("%lf", &operand2);

  while(operand2 == 0){
    printf("Division by zero are not defined. Enter a valid operand.\n");
    scanf("%lf", &operand2);
  }
  
  switch (operator[0]){
    
  case '+':
    printf("%.10lf\n", sum(operand1, operand2));
    break;
  case '-':
    printf("%.10lf\n", subtraction(operand1, operand2));
    break;
  case '*':
    printf("%.10lf\n", multiplication(operand1, operand2));
    break;
  case '/':
    printf("%.10lf\n", division(operand1, operand2));
    break;
  }
  
  return 0;
}

//////////////////////////////////////////////////////////////
///////////////   Function definitions   /////////////////////
//////////////////////////////////////////////////////////////

/*Sum function*/
double sum(double x, double y)
{
  return x + y;
}

/*Subtraction function*/
double subtraction(double x, double y)
{
  return x - y;
}

/*Multiplication function*/
double multiplication(double x, double y)
{
  return x * y;
}

/*Division function*/
double division(double x, double y)
{
  return x / y;
}
