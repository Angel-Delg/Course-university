/* Escriba un programa que imprima los números 1 a 4 en un mismo renglón. Escriba el Programa  
   utilizando los siguientes métodos: 
 
a) Utilizando un enunciado printf sin especificador de conversión 
b) Utilizando un enunciado printf con cuatro especificadores de conversión 
c) Utilizando cuatro enunciados printf. */


#include <stdio.h>

int main(void){

   int num1 = 1
   ,   num2 = 2
   ,   num3 = 3
   ,   num4 = 4;

   printf("Numeros: ", num1, num2, num3, num4);
   printf("\nNumeros: %i , %i , %i, %i", num1, num2, num3, num4);

   printf("\nNumeros: %i", num1);
   printf("\nNumeros: %i", num2);
   printf("\nNumeros: %i", num3);
   printf("\nNumeros: %i", num4);

   return 0;
}