/*
   En un supermercado se hace una promoción, mediante la cual el cliente obtiene un
   descuento dependiendo de un número que se escoge al azar. Si el número escogido es
   menor que 74 el descuento es del 15% sobre el total de la compra, si es mayor o igual a
   74 el descuento es del 20%. Realizar un Programa que obtenga cuánto dinero se le
   descuenta.
*/

#include <stdio.h> 

int main(void){

   int numeroAleatorio, montoTotalCompra, descuento;

   printf("Ingrese un numero: ");
   scanf("%i", &numeroAleatorio);

   printf("Ingrese el monto total de su compra: ");
   scanf("%i", &montoTotalCompra);

   if(numeroAleatorio < 74) descuento = montoTotalCompra * 0.15;
   else descuento = montoTotalCompra * 0.2;

   printf("Descuento aplicado con exito!\nTotal a pagar: %i",montoTotalCompra - descuento);

   return 0;
}