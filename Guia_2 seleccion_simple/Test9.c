/*
   Elabora un Programa que solicite la edad de 2 hermanos y muestre un mensaje indicando
   la edad del mayor y cuantos años de diferencia tiene con el menor.
*/

#include <stdio.h>

int main(void){

   int age1, age2;

   printf("Ingrese la edad del primer hermano: ");    scanf("%i", &age1);
   printf("Ingrese la edad del segundo hermano: ");   scanf("%i", &age2);

   if(age1 > age2) printf("El primer hermano es mayor!\nDiferencia de edad: %i", age1 - age2);
   else if(age2 > age1) printf("El segundo hermano es mayor!\nDiferencia de edad: %i", age2 - age1);
   else printf("Poseen la misma edad!!\nPosiblemente sean gemelos");

   return 0;
}