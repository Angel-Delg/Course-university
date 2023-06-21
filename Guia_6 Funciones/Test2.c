#include <stdio.h>
#include <math.h>

double calculateCubeOfNumber(double);

int main(void){

   double initialValue;
   printf("Enter a float number: ");
   scanf("%lf", &initialValue);
   printf("The cube is: %.1lf", calculateCubeOfNumber(initialValue));

   return 0;
}
double calculateCubeOfNumber(double value){
   return pow(value, 3);
}