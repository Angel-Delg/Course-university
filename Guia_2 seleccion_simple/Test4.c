/*
   Realice un Programa para determinar el sueldo semanal de un trabajador con base en las
   horas trabajadas y el pago por hora, considerando que después de las 40 horas cada hora
   se considera como excedente y se paga el doble.
*/

#include <stdio.h>

int main(void)
{
   float horas_trabajadas, pago_por_hora, sueldo_semanal;

   printf("Ingrese las horas trabajadas esta semana: ");
   scanf("%f", &horas_trabajadas);
   printf("Ingrese el pago por hora: ");
   scanf("%f", &pago_por_hora);
    
   if (horas_trabajadas <= 40) {
      sueldo_semanal = horas_trabajadas * pago_por_hora;
   } else {
      sueldo_semanal = 40 * pago_por_hora + (horas_trabajadas - 40) * (pago_por_hora * 2);
   }
   
   printf("El sueldo semanal del trabajador es de: $%.2f\n", sueldo_semanal);
    
   return 0;
}