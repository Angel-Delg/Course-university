#include <stdio.h>
#include <stdbool.h>

bool verificarCaracter(char);

int main(void){

   char caracter; bool res = NULL;

   printf("Enter a character: ");
   scanf("%c", &caracter);
      
   res = verificarCaracter(caracter);
   printf( res ? "Si se encuentra en el rango de 0 - 9" : "Valor no se encuentra 0 - 9");

   return 0;
}

bool verificarCaracter(char caracter){
   return (caracter >= '0' && caracter <= '9') ? true : false;  
}