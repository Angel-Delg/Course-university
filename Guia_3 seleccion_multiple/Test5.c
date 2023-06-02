/*
   Una persona enferma, que pesa 70 Kg, se encuentra en reposo y desea saber cuantas calorías consume su 
   cuerpo durante todo el tiempo que realice una misma actividad. Las actividades que tiene permitido 
   realizar sonúnicamente dormir o estar sentado en reposo. Los datos que tiene son que estando dormido 
   consume 1,08calorías por minuto y estando sentado en reposo consume 1,66 calorías por minuto. 
   Realice un programa para este problema.
*/

#include <stdio.h>

int main() {
   float peso, calorias_por_minuto, duracion, calorias_totales;

   printf("Ingrese su peso en Kg: ");
   scanf("%f", &peso);

   printf("%cQu%c actividad est%c realizando?\n",168, 130, 160);
   printf("1. Dormir\n");
   printf("2. Estar sentado en reposo\n");
   int opcion;
   scanf("%d", &opcion);

   switch (opcion) {
      case 1:
         calorias_por_minuto = 1.08;
         break;
      case 2:
         calorias_por_minuto = 1.66;
         break;
      default:
         printf("Opción no válida\n");
         return 0;
   }

   printf("Ingrese la duraci%cn en minutos: ",162);
   scanf("%f", &duracion);

   calorias_totales = calorias_por_minuto * duracion * peso;
   printf("Usted ha consumido %.2f calor%cas.\n", calorias_totales,161);

   return 0;
}