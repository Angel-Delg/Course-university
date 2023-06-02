/*
   Una compañía ha clasificado a sus empleados en dos Grupos: Grupo 1 y Grupo 2. Cada empleado
   del grupo 1 recibirá un aumento de C$25.00 córdobas, mientras que cada empleado del grupo 2
   recibirá un aumento de solo C$15.00 córdobas. Elabore un Programa que permita calcular el nuevo
   sueldo.
*/

#include <stdio.h>

int main() {
   int grupo;
   float sueldo, aumento, nuevo_sueldo;

   printf("%cA qu%c grupo pertenece el empleado? (1 o 2): ",168 ,130);
   scanf("%d", &grupo);

   printf("Introduce el sueldo del empleado: ");
   scanf("%f", &sueldo);

   if (grupo == 1) {
      aumento = 25.0;
   } else if (grupo == 2) {
      aumento = 15.0;
   } else {
      printf("Error: grupo inv%clido.\n",160);
      return 1;
   }

   nuevo_sueldo = sueldo + aumento;

   printf("El nuevo sueldo del empleado es %.2f c%crdobas.\n", nuevo_sueldo, 162);

   return 0;
}