/* Suponiendo que el kilo de azúcar y de café están a 2 y 3 euros respectivamente(constantes), escribir en  
   lenguaje C un   programa que: 

   a) Pida por teclado una cantidad (dato real) en euros. 
   b) Si la mitad de la cantidad introducida se destina a comprar azúcar, una tercera parte a comprar café, y  
      el resto no se gasta.  

   Calcule cuántos kilos de azúcar y café (datos reales) se pueden comprar con dicha cantidad de dinero, así  
   como la cantidad (dato real) de dinero sobrante. 

   c) Muestre por pantalla los resultados (datos reales)
*/

#include <stdio.h>
#define azucar 2
#define cafe 3

int main(void){

   int cantidadEuros = 0, resto;
   printf("Ingrese un cantidad de euros: ");
   scanf("%i", &cantidadEuros);

   float cantidadAzucarComprada = (cantidadEuros * 0.5) / azucar;
   float cantidadCafeComprado = (cantidadEuros * 0.33) / cafe;
   resto = cantidadEuros - ( (cantidadEuros * 0.5 ) + (cantidadEuros * 0.33) );

   printf("\nKilos de Azucar: %.2f", cantidadAzucarComprada);
   printf("\nKilos de Cafe: %.2f", cantidadCafeComprado);
   printf("\nDinero restante: %.2f Euros", (float) resto);

   return 0;
}