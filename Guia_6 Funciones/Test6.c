#include <stdio.h>
#include <math.h>

int showMenuOfTheOption(void);
double calculateOperations(int);

int main(void){

   int resultOption = NULL;

   do{
      resultOption = showMenuOfTheOption();

      if(!(resultOption >= 0 && resultOption <= 9)){
         printf("\nOPTION INVALID ERROR !!\nEnter a option valid\n");
         return 1;
      }
      const double response = calculateOperations(resultOption);
      printf("Resultado: %.2lf",response);
   }while(resultOption != 0);

   return 0;
}

double calculateOperations(int option){
   double value; 
   
   switch (option){
      case 1:{
         printf("Ingrese el angulo: ");
         scanf("%lf", &value);
         return sin(value);
      }
      case 2:{
         printf("Ingrese el angulo: ");
         scanf("%lf", &value);
         return cos(value);
      }
      case 3:{
         printf("Ingrese el angulo: ");
         scanf("%lf", &value);
         return tan(value);
      }
      case 4:{
         printf("Ingrese el valor numerico: ");
         scanf("%lf", &value);
         return log(value);
      }
      case 5:{
         printf("Ingrese la potencia: ");
         scanf("%lf", &value);
         return pow( exp(1.0) ,value);      
      }
      case 6: {
         double base, exponent;

         printf("Ingrese la base: ");
         scanf("%lf", &base);
         printf("Ingrese el exponente: ");
         scanf("%lf", &exponent);

         return pow(base, exponent);
      }
      case 7: {
         printf("Ingrese el valor: ");
         scanf("%lf", &value);
         return fabs(value);
      }
      case 8: {
         printf("Ingrese el valor numerico: ");
         scanf("%lf", &value);
         return log(value);
      }
      case 9: {
         printf("Ingrese el valor: ");
         scanf("%lf", &value);
         return sqrt(value);
      }
   }

   return value;
}

int showMenuOfTheOption(void){

   int option;

   printf("\nQue deseas Calcular?");
   printf("\n1.Seno ");
   printf("\n2.Coseno ");
   printf("\n3.Tangente ");
   printf("\n4.Logaritmo Natural ");
   printf("\n5.e elevando a una potencia ");
   printf("\n6.Base elevanda a un exponente ");
   printf("\n7.Valor Absoluto ");
   printf("\n8.Logaritmo Neperiano ");
   printf("\n9.Raiz Cuadrada");
   printf("\n0.Salir\n");
   scanf("%i", &option);

   return option;
}