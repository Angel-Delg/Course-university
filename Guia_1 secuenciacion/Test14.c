/*

Una empresa desea determinar el monto de un cheque que debe proporcionar a uno de sus empleados que 
tendrá que ir por equis número de días a la ciudad de Monterrey; los gastos que cubre la empresa son: hotel,  
comida y 100.00 pesos diarios para otros gastos. El monto debe estar desglosado para cada concepto. Realice  
un programa que determine el monto del cheque

*/

#include <stdio.h>
#define DIARIO 100

int main(void){

    int gastosComida, gastoHotel, cantidadDia, montoTotal;
    char NombreDirigido[20];

    printf("Ingrese su nombre: ");
    scanf("%s", &NombreDirigido);

    printf("Ingrese la cantidad de dias: ");
    scanf("%i", &cantidadDia);

    printf("Ingrese los gastos de hotel: ");
    scanf("%i", &gastoHotel);

    printf("Ingrese cantidad de dinero en gastos de comida: ");
    scanf("%i", gastosComida);

    montoTotal = gastoHotel + (cantidadDia * DIARIO) + gastosComida;

    printf("Nombre: %s\nMonto: %i", NombreDirigido, montoTotal);

    return 0;
}