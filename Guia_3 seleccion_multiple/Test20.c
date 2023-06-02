/*
   Diseñar un algoritmo que permita introducir un entero x y que clasifique en una de las siguientes 
   categorías y escriba un mensaje adecuado:
   X < 0 o bien 0 <= x <= 100 o bien x > 100
*/

#include <stdio.h>

int main(void){

   int numero;
   printf("Introduzca un numero: ");
   scanf("%i", &numero);

   if(numero < 0) printf("El numero es negativo");
   else if(numero >= 0 && numero <= 100) printf("El numero esta entre 0 y 100");
   else printf("El numero es mayor a 100");

   return 0;
}