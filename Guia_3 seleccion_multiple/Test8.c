/*
   Solicitar al usuario la inicial del día de la semana y mostrar el nombre del día completo. La letra inicial puede ser
   mayúscula o minúscula. Usar la x para el miércoles. Realice un programa.   
*/

// nota: correcto que lo hago 
#include <stdio.h>

int main(void){

   char letterDay;

   printf("Ingrese la inicial del dia de la semana: ");
   scanf("%c", &letterDay);

   switch (letterDay)
   {
      case 'L': case 'l': printf("Lunes"); break;
      case 'M': case 'm': printf("Martes"); break;
      case 'X': case 'x': printf("Miercoles"); break;
      case 'J': case 'j': printf("Jueves"); break;
      case 'V': case 'v': printf("Viernes"); break;
      case 'S': case 's': printf("Sabado"); break;
      case 'D': case 'd': printf("Domingo"); break;
      
      default: printf("No exite un dia asociado a esta letra!!"); break;
   }

   return 0;
}