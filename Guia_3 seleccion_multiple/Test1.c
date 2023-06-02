/*
   a) Muestre el listado de los planetas (con sus números asociados).
   b) Pida por teclado el número (dato entero) asociado a un planeta.
   c) Muestre la distancia media al Sol, a la que se encuentra el planeta seleccionado.
*/
// Nota: podemos asociar un array y ciclo para que sea mas facil el proceso de listado

/*
   1. Mercurio    59
   2. Venus       108
   3. Tierra      150
   4. Martes      228
   5. Júpiter     750
   6. Saturno     1431
   7. Urano       2877
   8. Neptuno     4509
   8. Plutón      5916
*/
#include <stdio.h>

int main(void)
{

   int NumeroPlanetaAsociado;

   // Mostrando listado de planetas
   printf("\tLista de planetas\n");
   printf("\t1. Mercurio\n");
   printf("\t2. Venus\n");
   printf("\t3. Tierra\n");
   printf("\t4. Martes\n");
   printf("\t5. J%cpiter\n", 163);
   printf("\t6. Saturno\n");
   printf("\t7. Urano\n");
   printf("\t8. Neptuno\n");
   printf("\t9. Plut%cn\n", 162);
   printf("\tIngrese un n%cmero asociado a un planeta: ", 163);
   scanf("%i", &NumeroPlanetaAsociado);

   switch(NumeroPlanetaAsociado)
   {
   case 1: printf("\n\tMercurio\n\tDistancia Media al sol: %i Millones KM", 59);
      break;
   
   case 2: printf("\n\tVenus\n\tDistancia Media al sol: %i Millones KM", 108);
      break;
   
   case 3: printf("\t\tTierra\n\tDistancia Media al sol: %i Millones KM", 150);
      break;

   case 4: printf("\t\tMartes\n\tDistancia Media al sol: %i Millones KM", 228);
      break;
   
   case 5: printf("\t\tJ%cpiter\n\tDistancia Media al sol: %i Millones KM", 163, 750);
      break;
   
   case 6: printf("\t\tSaturno\n\tDistancia Media al sol: %i Millones KM", 1431);
      break;
   
   case 7: printf("\t\tUrano\n\tDistancia Media al sol: %i Millones KM", 2877);
      break;
   
   case 8: printf("\t\tNeptuno\n\tDistancia Media al sol: %i Millones KM", 4509);
      break;
   
   case 9: printf("\t\tPlut%cn\n\tDistancia Media al sol: %i Millones KM",162, 5916);
      break;

   default: printf("\n\tError \'%i\' No se encuentra asociado a ningun planeta", NumeroPlanetaAsociado);
      break;
   }

   return 0;
}