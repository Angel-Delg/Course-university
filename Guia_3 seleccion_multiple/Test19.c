/*
   Escribir un algoritmo que pida la nota de un examen (un No real entre 0 y 100) e imprima por pantalla 
   la calificación en formato “Suspenso”, si la nota es menor que 50, “Aprobado” si está entre 50 inclusive 
   y 70 sin incluir, “Notable” si está entre 70 inclusive y 90 sin incluir, “Sobresaliente” si está entre 90 
   inclusive y 100 sin incluir y “Matrícula de honor” si la nota es igual a 100.
*/

#include <stdio.h>

int main(void){

   int notaExamen;
   
   printf("Ingrese la nota de examen: ");
   scanf("%i", &notaExamen); 

   while(notaExamen > 100  || notaExamen < 0){
      printf("Ingrese la nota de examen: ");
      scanf("%i", &notaExamen);
   }

   if(notaExamen < 50) printf("SUSPENSO");
   else if(notaExamen < 70) printf("APROBADO");
   else if(notaExamen < 90) printf("NOTABLE");
   else if(notaExamen < 100) printf("SOBRESALIENTE");
   else printf("MATRICULA DE HONOR");
   
   return 0;
}