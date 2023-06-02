/*

   El dueño de una papelería desea un programa que le indique el precio de venta de un artículo dado. 
   El precio se calcula de acuerdo con la siguiente fórmula: 

   PVP = precio_coste + ganancia. Donde la ganancia será:
   
    El 15% si el precio de coste es inferior C$300.
    50 córdobas si el precio de coste está entre C$300 y C$ 600.
    El 25% si el precio de coste supera los C$ 600
   
   Realice un programa para este problema.

*/

#include <stdio.h>

int main(void)
{
   int precioCoste, ganancia, PVP;

   printf("Ingrese el precio del articulo comprado: ");
   scanf("%i", &precioCoste);

   if(precioCoste < 300){
      ganancia = precioCoste * 0.15;
      PVP = precioCoste + ganancia;
   }
   else if(precioCoste >= 300 && precioCoste < 600){
      PVP = precioCoste + 50;
   }
   else {
      ganancia = precioCoste * 0.25;
      PVP = precioCoste + ganancia;
   }

   printf("Precio de venta del articulo: C%c%i",36, PVP);

   return 0;
}