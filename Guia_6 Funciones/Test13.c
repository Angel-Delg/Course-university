#include <stdio.h>
#include <ctype.h>

char convertirCaracter(char);

int main(void){

   char character; int response = NULL;

   printf("Ingrese un caracter: ");
   scanf("%c", &character);

   if(!(isalpha(character) != 0)){
      printf("ERROR,THE CHARACTER ISN'T ALPHABETICAL");
      return 1;
   }

   printf("is: %c", convertirCaracter(character));

   return 0;
}

char convertirCaracter(char character){
   return (character >= 'A' && character <= 'Z') ? tolower(character) 
   : (character >= 'a' && character <= 'z') ? toupper(character) : character;
}