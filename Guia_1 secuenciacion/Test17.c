/*
   Se requiere un programa para determinar el costo que tendra que realizar una llamada telefonica con base
   en el tiempo que dura la llamada y el costo por minuto.
*/

#include <stdio.h>
#define COSTO_LLAMADA 3.4

int main(void)
{

   int duracionLlamada; float costoTotal;
   printf("Ingrese la duracion de la llamada en minutos: ");
   scanf("%i", &duracionLlamada);

   costoTotal = (float) duracionLlamada * COSTO_LLAMADA;
   printf("Precio a pagar es: %.2f", costoTotal);
  
   return 0;
}