#include <stdio.h>
#define MAX_LETTER 40

char returnFirstLetterString(const char* string);

int main(void){

   char username[MAX_LETTER];
   printf("Enter your name: ");
   fgets(username, MAX_LETTER, stdin);

   char firstLetter = returnFirstLetterString(username);
   printf("%c", firstLetter);

   return 0;
}

char returnFirstLetterString(const char* string){
   return string[0];
}