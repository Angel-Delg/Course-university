#include <stdio.h>
#include <string.h>
#include <windows.h>

#define COSTO_INTERNACIONAL_ADICIONAL 3.03
#define COSTO_NACIONAL_ADICIONAL 0.48
#define COSTO_LOCAL 0.60

#define COSTO_PRIMEROS_TRES_MINUTOS_INTERNACIONAL 7.59
#define COSTO_PRIMEROS_TRES_MINUTOS_NACIONAL 1.20

/*
   Internacional: 3 primeros minutos $ 7.59
   Cada minuto adicional $ 3.03
   
   Nacional: 3 primeros minutos $ 1.20
   Cada minuto adicional $ 0.48
   
   Local: Las primeras 50 llamadas no se cobra. Luego
   cada llamada cuesta $0.60
*/

int main(void)
{
   
   int duracionLlamada = 0, cantidadLlamadas = 0;
   float costoAdicional = 0, costoTotal = 0;
   
   char LOCAL[30] = "LOCAL", INTERNACIONAL[30] = "INTERNACIONAL", NACIONAL[30] = "NACIONAL";
   char TipoLlamada[30];

   printf("\tIngrese la cantidad de llamadas a realizar: ");
   scanf("%i", &cantidadLlamadas);

   /* 
      En este caso utilize un ciclo for para simular el proceso de llamadas y asi llevar el control de llamadas
      hechas, pero podemos usar otros x  metodos como FILE * contro.txt
   */

   for(int i = 1; i < cantidadLlamadas; i++){

      printf("\n\tIngrese el tipo de llamada a realizar: ");
      printf("\n\t- Local");
      printf("\n\t- Nacional");
      printf("\n\t- Internacional");
      printf("\n\tPorfavor escriba el nombre de la llamada: ", 163);
      scanf("%s", &TipoLlamada);

      printf("\tIngrese la duracion de la llamada: ");
      scanf("%i", &duracionLlamada);

      if(strcasecmp(TipoLlamada, LOCAL) == 0){
         if(i <= 50){
            printf("\n\tLas primeras 50 llamadas, el costo de la llamadas locales son gratis sin ningun costo");
         }
         else {
            costoTotal = duracionLlamada * COSTO_LOCAL;
            printf("\n\tHaz exedido mas de 50 llamada\n\tCosto total a pagar: %.2f", costoTotal);
         }
      }
      else if(strcasecmp(TipoLlamada, INTERNACIONAL) == 0){
         costoAdicional = (duracionLlamada - 3) * COSTO_INTERNACIONAL_ADICIONAL;
         costoTotal = costoAdicional + (3 * COSTO_PRIMEROS_TRES_MINUTOS_INTERNACIONAL);

         printf("\n\tDuracion Llamada: %i\n\tCosto Total a pagar: %.2f",duracionLlamada, costoTotal);
      }
      else if(strcasecmp(TipoLlamada, NACIONAL) == 0){
         costoAdicional = (duracionLlamada - 3) * COSTO_NACIONAL_ADICIONAL;
         costoTotal = costoAdicional + (3 * COSTO_PRIMEROS_TRES_MINUTOS_NACIONAL);

         printf("\n\tDuracion Llamada: %i\n\tCosto Total a pagar: %.2f",duracionLlamada, costoTotal);
      }
      else{
         printf("EL tipo de llamada introducido no es valido! ");
         return -1;
      }

      printf("\n");
      system("pause");
      system("cls");
   }
   return 0;
}