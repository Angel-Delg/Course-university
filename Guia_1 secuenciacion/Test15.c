/*
   Realice un programan para determinar el promedio que obtendrá un alumno considerando que realiza tres
   exámenes, de los cuales el primero y el segundo tienen una ponderación de 25%, mientras que el tercero de
   50%.
*/
#include <stdio.h>
int main(void)
{

   int examen1, examen2, examen3;
   double promedio;

   printf("Ingrese la nota del primer examen: ");
   scanf("%i", &examen1);
   printf("Ingrese la nota del segundo examen: ");
   scanf("%i", &examen2);
   printf("Ingrese la nota del tercer examen: ");
   scanf("%i", &examen3);
   
   promedio = (double) (examen1 * 0.25) + (examen2 * 0.25) + (examen3 * 0.5);

   printf("Promedio: %.2lf", promedio);

   return 0;
}