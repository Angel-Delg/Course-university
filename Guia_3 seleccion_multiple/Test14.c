#include<stdio.h>

int main(void){
	
	int numero,compra;
	float total,descuento;
	
	printf("dijite el precio de su articulo y escoja un numero al azar\n");
	scanf("%i%i",&compra,&numero);
	
	if(numero>=74){
	    descuento = compra * 0.20;
		total = compra-descuento;
		printf("el dinero que se le descuenta con un 20 por ciento es un total de: %.2f y el total a pagar es de: %.2f",descuento,total);
	}
	else
	  if(numero<74){
	  	descuento = compra * 0.15;
	  	total = compra-descuento;
	  	printf("el dinero que se le descuenta con un 15 por ciento es un total de: %.2f y el total a pagar es de: %.2f",descuento,total);
	  }
	
	return 0;
}
