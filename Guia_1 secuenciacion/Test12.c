/*
La compañía de autobuses “La curva loca” requiere determinar el costo que tendrá el boleto de un viaje sencillo,  
esto basado en los kilómetros por recorrer y en el costo por kilómetro. Realice el programa en C  y el algoritmo  
para tal fin
*/
#include <stdio.h>
#define costByKm 20

int main(void)
{
   float CantidadKilometrosRecorridos = 0, resultado;

   printf("\t***** La Curva Loca *****");
   printf("\nIngrese la distancia del viaje en kilometros: ");
   scanf("%f", &CantidadKilometrosRecorridos);

   resultado = CantidadKilometrosRecorridos * costByKm;

   printf("\nValor del boleto: %.2f", resultado);
   return 0;
}