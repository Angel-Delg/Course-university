#include <stdio.h>

int returnMinOfTwoNumber(int, int);

int main(void){
   int a , b;
   printf("Enter two numbers: ");
   scanf("%i %i", &a, &b);
   printf("The min is: %i", returnMinOfTwoNumber(a, b));
   
   return 0;
}

int returnMinOfTwoNumber(int x, int y){
   return (x < y) ? x : y;
}