#include <stdio.h>


int validateDate(int , int , int);

int main(void){

   int day, month, year;

   printf("Introduzca un dia:  ");
   scanf("%i", &day);

   printf("Introduzca un mes: ");
   scanf("%i", &month);

   printf("Introduzca un a%co: ",164);
   scanf("%i", &year);

   validateDate(day, month, year) == 0 && printf("FECHA CORRECTA\n%i/ %i / %i", year, month, day);
   return 0;
}

int validateDate(int day, int month, int year){

   if(!(month >= 1 && month <= 12)){
      printf("FECHA INCORRECTA");
      return -1;
   } 

   if(year % 4 == 0)
      if(month == 2){
         if(day > 29 || day < 1){
            printf("FECHA INCORRECTA");
            return -1;
         }
      }

   else 
      if(month == 2){
         if(day < 1 || day > 28){
            printf("FECHA INCORRECTA");
            return -1;
         }
      }

   if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
      if( day < 1 || day > 31 ) {
         printf("FECHA INCORRECTA");
         return -1;
      }
   }

   if(month == 4 || month == 6 || month == 9 || month == 11){
      if(day < 1 || day > 30){
         printf("FECHA INCORRECTA");
         return -1;
      }
   }

   return 0;
}