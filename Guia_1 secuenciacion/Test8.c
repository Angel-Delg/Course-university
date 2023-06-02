/* 
Escriba un programa que calcule el interés que se obtiene por un determinado dinero depositado en un banco.  
Para ello el  programa preguntará por el capital inicial y por el tipo de interés 
*/

#include <stdio.h>

int main(void){

   float capital, tasaInteres, interes;
   printf("Ingrese el capital: ");
   scanf("%f", &capital);

   printf("\nIngrese la tasa de interes: ");
   scanf("%f", &tasaInteres);

   interes = capital * (tasaInteres / 100);
   printf("\nInteres: %.2f", interes);
   
   return 0;
}