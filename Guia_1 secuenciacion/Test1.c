#include <ctype.h>
#include <stdio.h>

int main(void)
{
   char c;
   printf("Enter: ");
   scanf(" %c", &c);

// Comprueba si al introducir recibe ' ' espacios en blanco o \t

   if (isblank(c))
   {
      printf("Your input is blank.\n");
   }
   else
   {
      printf("Your input is not blank.\n");
   }
}