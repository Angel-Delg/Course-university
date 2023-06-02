/*
   Realice un Programa para determinar cuánto se debe pagar por equis 
   cantidad de lápices considerando que si son 1000 o más el costo 
   es de C$85; de lo contrario, el precio es de C$90.
*/

#include <stdio.h>

int main(void){
   
   int cantidad, costoTotal;

   printf("Ingrese la cantidad de lapices a comprar: ");
   scanf("%d", &cantidad);

   if(cantidad >= 1000){
      costoTotal = cantidad * 85;
      printf("El costo a pagar: %i", costoTotal);

   }else{
      costoTotal = cantidad * 90;
      printf("El costo a pagar: %i", costoTotal);
   }

}