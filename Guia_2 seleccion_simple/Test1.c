#include <stdio.h>

int main(void){

   int numero;

   printf("Ingrese un numero: ");
   scanf("%i", &numero);

   if(numero % 2 == 0) printf("Par");
   else printf("No es par");
   
   return 0;
}