/* 
Un productor de leche lleva el registro de lo que produce en litros, pero cuando entrega 
le pagan en galones.

Realice un programa, y represéntelo mediante un diagrama de flujo y el pseudocódigo, que ayude al productor  
a saber cuánto recibirá por la entrega de su producción de un día (1 galón = 3.785 litros).
*/
#include <stdio.h>
#define PAGO_GALON  4.5

int main(void){

   float cantidadLitrosProducido, totalGalones, total;

   printf("Ingrese la cantidad de litros producidos: ");
   scanf("%f", &cantidadLitrosProducido);

   totalGalones = cantidadLitrosProducido / 3.785;
   total = totalGalones * PAGO_GALON;

   printf("Total de pago: %.2f", total);

   return 0;
}