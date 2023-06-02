/*
   Escribir un programa que permita determinar la cantidad total a pagar por una llamada telefónica de N minutos
   (introducido por el usuario), teniendo en cuenta lo siguiente:

    Las llamadas de 5 minutos o menos tienen un coste de 10 dólares.
    Cada minuto adicional a partir de los 5 primeros cuesta 2 dólares.
*/

#include <stdio.h>

int main(void){

   int cantidadMinutos, totalPagar;

   printf("Ingrese cantidad de minutos de la llamada: ");
   scanf("%i", &cantidadMinutos);

   if(cantidadMinutos <= 5){
      totalPagar = cantidadMinutos * 10;
   }
   else {
      // solo los minutos adicionales cuesta 2 dolares los primeros 5 cuesta su valor original de 10
      totalPagar = (cantidadMinutos - 5) * 2 + (10 * 5);
   }

   printf("Total a pagar: %i dolares", totalPagar);
   
   return 0;
}