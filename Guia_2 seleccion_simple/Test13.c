/*
   Hacer un Programa para un programa que calcule el pago que hacen un grupo de personas para ver
   una película teniendo en cuenta que si el grupo es menor de 8 personas el pago es de 75 córdobas
   por persona y para grupos de 8 personas o más el pago es 60 córdobas por persona.
*/
#include <stdio.h>

int main() {
   int num_personas, precio_por_persona, precio_total;

   printf("Ingrese el numero de personas: ");
   scanf("%d", &num_personas);

   if (num_personas >= 8) {
      precio_por_persona = 60;
   } else {
      precio_por_persona = 75;
   }

   precio_total = num_personas * precio_por_persona;

   printf("El precio total a pagar es: %d cordobas\n", precio_total);

   return 0;
}
