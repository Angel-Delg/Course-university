/* Escribir en lenguaje C un programa que: 
   a) Pida por teclado el radio (dato real) de una circunferencia. 
   b) Calcule el perímetro de la circunferencia. 
   c) Muestre por pantalla el resultado (dato real). 

   Nota1: Perímetro de una circunferencia = 2 * Π * radio. 
   Nota2: Π (pi) debe declararse como una constante simbolica
*/

#include <stdio.h>
#define PI 3.1416

int main(void){

   float radio, perimetro;

   printf("Ingrese el radio: ");
   scanf("%f", &radio);

   perimetro = (2 * PI) * radio;
   printf("Perimetro: %.2f", perimetro); 

   return 0;
}