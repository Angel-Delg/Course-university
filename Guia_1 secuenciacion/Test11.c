/* 
   Se requiere determinar la hipotenusa de un triángulo rectángulo. Resuelva el problema con un programa que          
   mueste como obtenerla?  Recuerde que por Pitágoras se tiene que: C2 = A2 + B2 ==> c^2 = a^2 + b^2


*/

#include <stdio.h>
#include <math.h>

int main(void)
{
   float catetoOpuesto, catetoAdyacente, hipotenusa;
   printf("Ingrese el valor de los catetos opuesto y adyancente:  ");
   scanf("%f %f", &catetoOpuesto, &catetoAdyacente);

   hipotenusa = pow(catetoOpuesto, 2) + pow(catetoAdyacente, 2);
   printf("El valor de la hipotenusa es C%c2: %.1f", 94, hipotenusa);

   return 0;
}