/*
   Almacenes “El Distinguido” tiene una promoción: a todos los trajes que tienen un precio
   superior a $2500.00 se les aplicará un descuento de 15 %, a todos los demás se les
   aplicará sólo 8%. Realice un Programa para determinar el precio final que debe pagar una
   persona por comprar un traje y de cuánto es el descuento que obtendrá.
*/

#include <stdio.h>

int main(void)
{

   int precioTraje, precioFinal, descuento;

   printf("Bienvenido a \'El Distinguido\'\n");
   printf("Ingrese el precio del traje: ");
   scanf("%i", &precioTraje);

   if(precioTraje >= 2500){
      descuento = precioTraje * 0.15;
      precioFinal = precioTraje - descuento;
   }
   else {
      descuento = precioTraje * 0.08;
      precioFinal = precioTraje - descuento;
   }

   printf("Precio: %i", precioFinal);

}