/*

   Se tienen dos valores A y B. Si el valor contenido en A es mayor que el valor en B, 
   Entonces el valor en B se trasladará a C. Si los valores en A y B son iguales,
   entonces C Se igualará a la suma de los valores que están en A y B. Si el valor en A es menor
   que en B, el valor en A se trasladará a C. Realice un programa que haga este proceso.

*/

#include <stdio.h>

int main(void){

   int a, b, c;

   printf("Ingrese el valor de A: ");
   scanf("%i", &a);

   printf("Ingrese el valor de B: ");
   scanf("%i", &b);

   if(a > b) c = b;   
   else if(a == b) c = a + b;
   else c = a;

   printf("Valor en C: %i", c);

   return 0;
}