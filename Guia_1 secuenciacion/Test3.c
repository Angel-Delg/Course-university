/* Escriba un programa que lea el radio de un círculo y que imprima el diámetro del mismo,  
   su circunferencia y su área. Utilice el valor de Pi directamente en la fórmula. */

// diametro:  radio ^ 2
// circunferencia: 2 PI * radio 
// area: PI * radio ^ 2

#include <stdio.h>
#define PI 3.1416

int main(void){
   // double %lf long, double %Lf, short %hd

   double radio, circunferencia, area, diametro;
   // const float PI = 3.1416;

   printf("Ingrese el radio del circulo: ");
   scanf("%lf", &radio);

   diametro = radio * 2;
   circunferencia = (2 * PI) * radio;
   area = PI * (radio * radio);

   printf("\nDiametro: %.1Lf\nCircunferencia: %.1Lf\nArea: %.1Lf",(long double)diametro, (long double)circunferencia, (long double)area);


   // 000000000000000
   return 0;
}