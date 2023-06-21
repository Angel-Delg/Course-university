#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
   @returnAbsNum return abs int
   note: if you want to use values float u're fabs
*/

int returnAbsNum(int);

int main(void){

   int value;
   printf("Enter a number: ");
   scanf("%i", &value);

   int responseNumAbs = returnAbsNum(value);
   printf("Abs: %i", responseNumAbs);

   return 0;
}

int returnAbsNum(int num){
   return abs(num);
}