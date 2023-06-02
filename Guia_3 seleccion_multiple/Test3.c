#include <stdio.h>

/*
   a) Muestre el listado de los posibles colores en los que puede estar un semáforo, con sus números asociados.
   b) Pida por teclado el número (dato entero) asociado a un color.
   c) Muestre el significado del color seleccionado.
*/

int main(void)
{

   int numeroAsociadoColor;

   printf("\tLista de Colores\n");
   printf("\t1. Rojo\n");
   printf("\t2. Verde\n");
   printf("\t3. Amarillo\n");
   printf("\tIngrese un n%cmero asociado al color: ", 163);
   scanf("%i", &numeroAsociadoColor);

   switch (numeroAsociadoColor)
   {
   case 1: printf("\n\t\'No pasar\'");
      break;
   case 2: printf("\n\t\'Adelante\'");
      break;
   case 3: printf("\n\t\'Precaucion\'");
      break;
   default: printf("\n\tERROR!! \n\tNota: El numero ingresado no esta asiciado a ningun color"); break;
   }

   return 0;
}