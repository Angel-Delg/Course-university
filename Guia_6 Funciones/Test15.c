#include <stdio.h>

int encontrarMCD(int, int);
void simplificacionNumeros(int*, int*);

int main(void){

   int a, b;
   printf("Ingrese dos numeros: ");
   scanf("%i %i", &a, &b);

   simplificacionNumeros(&a, &b);

   printf("Numeros Simplificados: (%i, %i)", a, b);

   return 0;
}

int encontrarMCD(int x, int y){
   int resto;

   while( y != 0){
      resto = x % y;
      x = y;
      y = resto; 
   }

   return x;
}

void simplificacionNumeros(int* x, int* y){
   int MCD = encontrarMCD(*x , *y);
   *x = *x / MCD;
   *y = *y / MCD;
}