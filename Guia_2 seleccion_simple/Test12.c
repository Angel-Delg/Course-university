/*
   Construya un Programa para calcular el precio del billete ida y vuelta en ferrocarril conociendo la
   distancia del viaje de ida y el tiempo de estancia. Se sabe además que si el número de días de
   estancia es superior a 7 y la distancia total(ida y vuelta) a recorrer es superior a 800 km, el
   billete tiene una reducción del 30%. El precio por km es de $0.17
*/

#include <stdio.h>

int main() {
   float distancia_ida, tiempo_estancia, distancia_total, precio_km, precio_total;

   printf("Introduce la distancia del viaje de ida en km: ");
   scanf("%f", &distancia_ida);

   printf("Introduce el tiempo de estancia en dias: ");
   scanf("%f", &tiempo_estancia);

   distancia_total = distancia_ida * 2;
   precio_km = 0.17;
   precio_total = distancia_total * precio_km;

   if (tiempo_estancia > 7 && distancia_total > 800) {
      // en ves de sacar el 0.3 y reducirlo mejor encontramo su 70% que ya trae la reduccion del 30%
      precio_total *= 0.7; // Aplicar descuento del 30%
   }

   printf("El precio del billete de ida y vuelta es: $%.2f\n", precio_total);

   return 0;
}