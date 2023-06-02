/*Escribir en lenguaje C un programa que: 
   a) Pida por teclado una hora en horas, minutos y segundos (datos enteros). 
   b) Calcule cuántos segundos han pasado desde las 0:0:0 horas. 
   c) Muestre por pantalla el resultado (dato entero). 

   Nota: Se asume que la hora introducida es correcta. 
*/

#include <stdio.h>
#include  <stdlib.h>

int main(int argc, char *argv[]){
   
   unsigned int hours, minutes, segunds;
   
   hours = atoi(argv[1]);
   minutes = atoi(argv[2]);
   segunds = atoi(argv[3]);

   if( argc < 4 ){
      printf("Error Hour invalid!!");
      return 1;
   }

   if( hours > 24 ){
      printf("the hour is invalid not can't more of 24 hours");
      return 2;
   } 

   if( minutes > 59 ){
      printf("the hour is invalid not can't more of 59 minutes");
      return 3;
   }

   if( segunds > 59 ){
      printf("the hour is invalid not can't more of 59 segunds");
      return 4;
   }

   int totalSegunds = 0;
   totalSegunds = (3600 * hours) + (60 * minutes) + segunds;
   printf("Total de segundos recorridos: %i", totalSegunds);

   return 0;
}