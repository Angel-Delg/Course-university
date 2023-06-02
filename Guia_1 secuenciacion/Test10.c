/*
   Una modista, para realizar sus prendas de vestir, encarga las telas al extranjero. 
   Para cada pedido, tiene que proporcionar las medidas de la tela en pulgadas, pero 
   ella generalmente las tiene en metros. Realice un programa para ayudar a resolver 
   el problema, determinando cuántas pulgadas debe pedir con base en los metros que requiere. 
   Represéntelo mediante el diagrama de flujo y el pseudocódigo (1 pulgada = 0.0254 m)
*/

#include <stdio.h>
#define pulgadasMetros 0.0254

int main(void){

   float cantidadMetrosRequerida, cantidadPulgadas;

   printf("Ingrese la cantidad de metros Requerida: \a");
   scanf("%f", &cantidadMetrosRequerida);

   cantidadPulgadas = cantidadMetrosRequerida / pulgadasMetros;

   printf("La cantidad de metros equivale a: %.2f pulgadas", cantidadPulgadas);

   return 0;
}