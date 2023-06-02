/*
   Escribir un Programa que permita determinar la cantidad total a pagar por una llamada
   telefónica de N pesos (introducido por el usuario), teniendo en cuenta lo siguiente:
   
   • Las llamadas de 5 pesos o menos tienen un coste de 10 centavos.
   • Cada peso adicional a partir de los 5 primeros cuesta 5 centavos.
*/

#include <stdio.h>

int main(void){

   double costo, cantidadCentavos;

   printf("Ingrese el costo de la llamada en pesos: ");
   scanf("%lf", &cantidadCentavos);

   if( cantidadCentavos <= 5) {
      costo = cantidadCentavos * 0.1;
      printf("Cantidad a pagar: %.2f", costo);
   }else {
      costo = 0.5 + (cantidadCentavos - 5) * 0.5;
      printf("Cantidad a pagar: %.2f", costo); 
   }
   
   return 0;
}