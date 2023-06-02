/*
   En la Podunka State University, los veteranos sólo pagan $30 dólares por materia, mientras que
   los demás (regulares) pagan $50 por materia. Escriba un Programa en el que el usuario introduce
   los datos del estudiante (Vet o Reg) y el número de materias. La salida debe indicar si el
   estudiante es de la categoría veterano o regular e indicar el número de materias y los costos de
   colegiatura.
*/

#include <stdio.h>

int main() {
   char categoria;
   int materias, costo;
   printf("Ingrese la categoria del estudiante (V=Veterano, R=Regular): ");
   scanf("%c", &categoria);
   if (categoria == 'V' || categoria == 'v') {
      printf("Ingrese el numero de materias: ");
      scanf("%d", &materias);
      costo = materias * 30;
      printf("El estudiante es veterano, tiene %d materias y debe pagar $%d de colegiatura.\n", materias, costo);
   } else if (categoria == 'R' || categoria == 'r') {
      printf("Ingrese el numero de materias: ");
      scanf("%d", &materias);
      costo = materias * 50;
      printf("El estudiante es regular, tiene %d materias y debe pagar $%d de colegiatura.\n", materias, costo);
   } else {
      printf("Error: opcion invalida. Ingrese una opcion valida (V o R).\n");
   }
   return 0;
}