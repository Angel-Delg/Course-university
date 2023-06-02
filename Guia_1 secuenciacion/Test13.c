/*
Se requiere determinar el tiempo que tarda una persona en llegar de una ciudad a otra en bicicleta, 
considerando que lleva una velocidad constante. Realice un diagrama de flujo, algoritmo y el programa    
que represente el enunciado
*/

#include <stdio.h>

int main(void)
{
   // t = d / v
   float distanciaMetros, velocidad, tiempo;

   printf("Ingrese un distancia en metros: ");    
   scanf("%f", &distanciaMetros);
   printf("Ingrese la velocidad en la que viaja: ");
   scanf("%f", &velocidad);

   tiempo = distanciaMetros / velocidad;
   printf("Tiempo estimado en llegar: %.2f", tiempo);

   return 0;
}