#include <stdio.h>
#include <math.h>

void polarCartesian(double, double, double*, double*);

int main(void){
   
   double radius, angle, x, y;
   printf("Ingrese la magnitud de la coordenada Polar (r): ");
   scanf("%lf", &radius);

   printf("Ingrese el angulo de la coordenada (theta en radianes): ");
   scanf("%lf", &angle);

   polarCartesian(radius, angle, &x, &y);

   printf("Las coordenadas cartesianas son: (%lf, %lf)", x, y);

   return 0;
}

void polarCartesian(double Rmagnitud, double thetaAngulo, double* x, double* y){
   *x = Rmagnitud * cos(thetaAngulo);
   *y = Rmagnitud * sin(thetaAngulo);
}