/*
   Se tiene registrado la producción (unidades) logradas por un operario a lo largo de la semana
   (lunes a sábado). Elabore un Programa que muestre o diga si el operario recibirá incentivos
   sabiendo que el promedio de producción mínima es de 100 unidades.
*/


#include <stdio.h>

int main() {
   int produccion_lunes, produccion_martes, produccion_miercoles, produccion_jueves, produccion_viernes, produccion_sabado;
   float promedio;

   printf("Introduce la producci%cn del lunes: ",162);
   scanf("%d", &produccion_lunes);
   printf("Introduce la producci%cn del martes: ",162);
   scanf("%d", &produccion_martes);
   printf("Introduce la producci%cn del mi%crcoles: ",162, 130);
   scanf("%d", &produccion_miercoles);
   printf("Introduce la producci%cn del jueves: ",162);
   scanf("%d", &produccion_jueves);
   printf("Introduce la producci%cn del viernes: ",162);
   scanf("%d", &produccion_viernes);
   printf("Introduce la producci%cn del s%cbado: ",162, 160);
   scanf("%d", &produccion_sabado);

   promedio = (produccion_lunes + produccion_martes + produccion_miercoles + produccion_jueves + produccion_viernes + produccion_sabado) / 6.0;

   if (promedio >= 100) {
      printf("El operario recibe incentivos.\n");
   } else {
      printf("El operario no recibe incentivos.\n");
   }

   return 0;
}