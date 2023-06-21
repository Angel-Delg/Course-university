#include <stdio.h>

int MaxOfTwoNumbers(int, int);

int main(void){
   int a , b;

   printf("Ingrese dos numeros: ");
   scanf("%i %i", &a, &b);
   printf("El mayor es: %i", MaxOfTwoNumbers(a, b));
   return 0;
}

int MaxOfTwoNumbers(int x, int y){
   return ( x > y) ? x : y;
}