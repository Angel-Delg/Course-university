/*
   Un colegio de la ciudad está ofreciendo el siguiente descuento, aplicado al pago de
   matricula y colegiatura
      
   Años estudiados en el colegio Descuento
   Entre 1 y 2 15%
   Entre 3 y 5 23%

   Diseñe un Programa que presente esta situación
*/


#include <stdio.h>

int main() {
   int num_anios;
   float costo, descuento;

   printf("Ingrese el n%cmero de a%cos que ha estudiado en el colegio: ", 163, 164);
   scanf("%d", &num_anios);

   printf("Ingrese el costo total de la matricula y colegiatura: ");
   scanf("%f", &costo);

   if (num_anios >= 1 && num_anios <= 2) {
      descuento = costo * 0.15;
      printf("Descuento aplicado del 15%%, el nuevo costo es: %.2f\n", costo - descuento);
   } else if (num_anios >= 3 && num_anios <= 5) {
      descuento = costo * 0.23;
      printf("Descuento aplicado del 23%%, el nuevo costo es: %.2f\n", costo - descuento);
   } else {
      printf("El numero de años ingresado no es valido.\n");
   }

   return 0;
}