/*

   Una cierta compañía fabricante de repuestos de automóviles ha descubierto defectos en algunos de sus 
   productos, específicamente aquellos cuyos números de serie se encuentran dentro de los rangos: 
   
   14,681 a 15,681, 
   70,001 a 79,999 y
   88,888 a 111,111. 
   
   La compañía se lo ha comunicado a la división de relaciones con los consumidores y desea un
   programa que permita leer el número de serie y deducir si es o no Defectuoso

*/

#include <stdio.h>

int main(void)
{
   int numeroSerie;

   printf("Ingrese el n%cmero de serie: ", 163);
   scanf("%i", &numeroSerie);

   (numeroSerie >= 14681 && numeroSerie <= 15681) ? printf("El n%cmero de serie %i se encuetra defectuoso", 163, numeroSerie)
   : (numeroSerie >= 70001 && numeroSerie <= 79999) ? printf("El n%cmero de serie %i se encuetra defectuoso", 163, numeroSerie) 
   : (numeroSerie >= 88888 && numeroSerie <= 111111) ? printf("El n%cmero de serie %i se encuetra defectuoso", 163, numeroSerie)
   : printf("No hemos encontrado anomalias en su n%cmero de serie", 163);

   printf("\nNOTA: Si el n%cmero de serie es defectuoso contacte a la compa%cia para mas informaci%cn.",163, 164, 162);

   return 0;
}