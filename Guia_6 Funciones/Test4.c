#include <stdio.h>
#include <math.h>
#define PI 3.14159

double calculatePow(double, int);

int main(void){

   int potencia;
   for(potencia = 2; potencia <= 10; potencia++){
      double resultPow = calculatePow(PI, potencia);
      double squarteRoot = sqrt(resultPow);
      printf("Pontencia %d de PI: %.4f\n", potencia, resultPow);
      printf("Raiz Cuandrada: %3.f\n", squarteRoot);
      printf("\n");
   }

   return 0;
}

double calculatePow(double base, int exponent){
   double result = 1.0;

   for(int i = 0; i <= exponent; i++){
      result *= base;
   }

   return result;
}