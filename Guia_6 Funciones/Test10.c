#include <stdio.h>

double salario(int , double);

int main(void)
{
   int CurrentHorasTrabajadas; double pagoHorasTrabajadas, salarioTrabajador;

   printf("Ingrese las horas trabajadas: ");
   scanf("%i", &CurrentHorasTrabajadas);
   printf("Ingrese pago por hora: ");
   scanf("%lf", &pagoHorasTrabajadas);

   salarioTrabajador = salario(CurrentHorasTrabajadas, pagoHorasTrabajadas);

   printf("Salario del trabajador: %.2lf", salarioTrabajador);

   return 0;
}

double salario(int horasTrabajadas, double pagoHoras){

   int horasOrdinarias = ( horasTrabajadas > 40) ? 40 : horasTrabajadas;
   int horasExtras = ( horasTrabajadas > 40 ) ? horasTrabajadas - 40 : 0;

   double salarioOrdinario = horasOrdinarias * pagoHoras;
   double salarioExtra = horasExtras * pagoHoras * 1.5;
   double salarioTotal = salarioOrdinario + salarioExtra;

   return salarioTotal;
}