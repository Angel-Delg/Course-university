/*
   Los empleados de una fábrica trabajan en dos turnos: diurno y nocturno. Se desea calcular usando un 
   programa el jornal diario de acuerdo con los siguientes puntos:
   
    La tarifa de cada hora diurno es de 20 córdobas
    La tarifa de cada hora nocturna es de 30 córdobas
    En caso de ser domingo, la tarifa se incrementará en 30 córdobas para el diurno y 50 córdobas el nocturno.
*/

#include <stdio.h>
#define IS_SUNDAY_TURNO_DIURNO 30
#define IS_SUNDAY_TURNO_NOCTURNO 50
#define TURNO_DIURNO 20
#define TURNO_NOCTURNO 30

int main(void)
{

   int is_sunday;
   int horasTrabajadasDiurno, horasTrabajadasNocturno, jornalDiario;
   int jornalDiurno, jornalNocturno, totalHorasTrabajadas;

   printf("%cEs domingo%c (0 = no, 1 = s%c): ",168, 63, 161);
   scanf("%c", &is_sunday);

   printf("Ingrese las horas trabajadas diurno: ");
   scanf("%i", &horasTrabajadasDiurno);

   printf("Ingrese las horas trabajadas nocturno: ");
   scanf("%i", &horasTrabajadasNocturno);

   if(is_sunday == 1){
      jornalDiurno = horasTrabajadasDiurno * IS_SUNDAY_TURNO_DIURNO; 
      jornalNocturno = horasTrabajadasNocturno * IS_SUNDAY_TURNO_NOCTURNO;
   }
   else {
      jornalDiurno = horasTrabajadasDiurno * TURNO_DIURNO;
      jornalNocturno = horasTrabajadasNocturno * TURNO_NOCTURNO;
   }

   jornalDiario = jornalNocturno + jornalDiurno;
   totalHorasTrabajadas = horasTrabajadasDiurno + horasTrabajadasNocturno;

   printf("Jornal Diario ");
   printf("\nHoras Trabajadas: %i", totalHorasTrabajadas);
   printf("\nJornal Nocturno: %i", jornalNocturno);
   printf("\nJornal Diurno: %i", jornalDiurno);
   printf("\nJornal Total: %i", jornalDiario);

   return 0;
}