/*
   Pedir al usuario un valor. Si el valor es positivo, pedir un segundo valor y calcular la suma,
   resta y producto de ambos. Mostrar los resultados por pantalla.
*/

#include <stdio.h>

int main(void){

   int valor, valor2;

   printf("Ingrese un valor: ");
   scanf("%i", &valor);

   if(valor < 0) return 1;

   printf("Ingrese un segundo valor: "); scanf("%i", &valor2);
   printf("\nSuma: %i\nResta: %i\nMultiplicacion: %i", valor + valor2, valor - valor2, valor * valor2);

   return 0;
}