/*
   En un estacionamiento, se cobra de la siguiente manera: los primeros 10 minutos son gratis, los
   siguientes 30 minutos tiene un valor de $15 . Diseñe un Programa que reciba minutos y
   muestre lo que debe cancelar el cliente.
*/


#include <stdio.h>

int main() {
   int minutos, costo;

   printf("Ingrese el numero de minutos: ");
   scanf("%d", &minutos);

   if (minutos <= 10) {
      costo = 0;
   } else if (minutos <= 40) {
      costo = 15;
   } else {

      /*
         En este caso, se utiliza una fórmula para calcular el costo adicional que se le debe cobrar al cliente: 
         se suman los 15 córdobas fijos que se cobran por los primeros 30 minutos y luego se agregan 5 córdobas 
         por cada bloque de 10 minutos adicionales. Para calcular cuántos bloques de 10 minutos adicionales hay, 
         se resta 40 minutos del tiempo total que el cliente ha estado en el estacionamiento, 
         y se divide el resultado entre 10 (ya que se cobra 5 córdobas por cada bloque de 10 minutos). 
         El resultado de esta operación se multiplica por 5 y se suma a los 15 córdobas fijos para obtener 
         el costo total.
      */
      costo = 15 + ((minutos - 40) / 10) * 5;
   }

   printf("El costo del estacionamiento es: %d cordobas\n", costo);

   return 0;
}