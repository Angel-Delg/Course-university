/*
    Realice un programa para determinar aproximadamente cuántos meses, semanas, días y horas ha vivido una  
    persona: el problema no pide ser bien explicito sino un aproximado
*/
#include <stdio.h>

int main(void)
{
    int meses, semanas, dias, horas;

    int edad;
    printf("Ingrese su edad: ");
    scanf("%i", &edad);

    // Estamos valorando un aproximado, no una exactitud de vida
    meses = edad * 12;
    semanas = meses * 4;
    dias = meses * 30;
    horas =  meses * 24;

    printf("Tiempo aproximado de vida vivido\n");
    printf("Cantidad Meses: %i\nCantidad Semanas: %i\n", meses, semanas);
    printf("Cantidad Dias: %i\nCantidad horas: %i", dias, horas);

    return 0;
}