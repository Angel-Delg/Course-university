/*

   Se necesita saber el pago que deberá hacer una persona, por préstamo vencido de libro a la biblioteca local. En la
   biblioteca es posible prestar más de un libro a una misma persona. Además se considera la multa de acuerdo a la
   clasificación de cada persona y un máximo de 10 días
   Clasificación Oficio Multa

   A Estudiante 4 córdobas por día por cada libro
   B Empleado 5 córdobas por día por cada libro
   C Empleador 7 córdobas por día por cada libro

   Si han transcurrido más de 10 días, entonces para cualquiera de las clasificaciones la multa
   aumenta a 15 córdobas por día.

*/

#include <stdio.h>
#include <windows.h>
#include <ctype.h>

#define MULTA 15

int main(void){

   int diasMora, totalPagar;
   char type;

   do{
      printf("\t\tCategorias\n");
      printf("\t\tA. Estudiante\n");
      printf("\t\tB. Empleado\n");
      printf("\t\tC. Empleador\n");
      printf("\t\tIngrese su clasificacion [a ,b y c]: ");
      scanf(" %c", &type);
      system("cls");

   }while(tolower(type) != 'a' && tolower(type) != 'b' && tolower(type) != 'c');

   printf("\n\t\tIngrese los dias de mora: ");
   scanf("%i", &diasMora);
   
   if(diasMora > 10){
      totalPagar = diasMora * MULTA;
      printf("\t\tHa pasado de los 10 dias\n\t\tTotal a pagar: C%c %i",36, totalPagar);
      return 1;
   }

   switch (type){
      case 'a': case 'A':{
         totalPagar = diasMora * 4;
         printf("\t\tHa pasado de los 10 dias\n\t\tTotal a pagar: C%c %i",36, totalPagar); break;
      }
      case 'b': case 'B':{
         totalPagar = diasMora * 5;
         printf("\t\tHa pasado de los 10 dias\n\t\tTotal a pagar: C%c %i",36, totalPagar); break;
      }
      case 'c': case 'C':{
         totalPagar = diasMora * 7;
         printf("\t\tHa pasado de los 10 dias\n\t\tTotal a pagar: C%c %i",36, totalPagar); break;
      }
   }

   return 0;
}