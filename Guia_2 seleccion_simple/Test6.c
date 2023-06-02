// Verificar un valor ingresado por el usuario, si es negativo o positivo
#include <stdio.h>

int main(void){

   int numero;
   printf("Ingrese un numero: ");
   scanf("%i", &numero);

   if(numero < 0) printf("El numero es negativo");
   else if( numero > 0) printf("El numero es positivo");
   else printf("El %i es considerado neutro", numero);

   return 0;
}