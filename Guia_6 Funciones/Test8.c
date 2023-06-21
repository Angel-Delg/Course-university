#include <stdio.h>
#include <math.h>
double calcularNumeroElevadoAbase(double, int);

// ventajas, desventajas, ejemplos, caracteristicas y funcionamiento

int main(void){

   double currentValue; int potencia;

   printf("Ingrese un numero: ");
   scanf("%lf", &currentValue);
   printf("Ingrese la potencia: ");
   scanf("%i", &potencia);

   printf("Resultado: %.2lf", calcularNumeroElevadoAbase(currentValue, potencia));

   return 0;
}

double calcularNumeroElevadoAbase(double num, int potencia){
   return pow(num, (double)potencia);
}