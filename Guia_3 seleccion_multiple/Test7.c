
#include <stdio.h>

int main(void)
{

   int day, month, year;

   // siempre manejamos el error, para que sea mas facil el proceso de validacion
   // tambien tenemos que evitar el anidamiento en exceso esto puede ayuda para leer mejor el codigo

   printf("Introduzca una fecha \'( day / month / year)\':  ");
   scanf("%i %i %i", &day, &month, &year);

   if(!(month >= 1 && month <= 12)){
      printf("FECHA INCORRECTA");
      return 1;
   } 

   // Evaluamos los meses de febrero bisiesto
   if(year % 4 == 0)
      if(month == 2){
         if(day > 29 || day < 1){
            printf("FECHA INCORRECTA");
            return 2;
         }
      }

   else 
      if(month == 2){
         if(day < 1 || day > 28){
            printf("FECHA INCORRECTA");
            return 3;
         }
      }

   if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
      if( day < 1 || day > 31 ) {
         printf("FECHA INCORRECTA");
         return 4;
      }
   }

   if(month == 4 || month == 6 || month == 9 || month == 11){
      if(day < 1 || day > 30){
         printf("FECHA INCORRECTA");
         return 5;
      }
   }

   printf("FECHA CORRECTA");
   return 0;
}