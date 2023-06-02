/* Escribir en lenguaje C un programa que: 
   a) Pida por teclado una cantidad (dato entero) en pesetas. 
   b) Calcule su equivalente en euros. 
   c) Muestre por pantalla el resultado (dato real). 

   Nota: 1 euro = 166,386 pesetas.
*/

#include <stdio.h>
#define EuroPesetas 166,386

int main(void){

   float pesetas, Euros;
   
   printf("Ingrese la cantidad de pesetas a convertir: ");
   scanf("%f", &pesetas);

   Euros = pesetas  / EuroPesetas;

   printf("\nCantidad en Euros: %.2f", Euros);

   return 0;
}