#include<stdio.h>

int main(void){
	
	int compra;
	float total,kg;
	
	printf("dijite cuanto pagara y la cantidad de kg\n");
	scanf("%i",&compra);
	scanf("%f",&kg);
	
	if(kg>=10.01){
		total=compra-(compra * 0.20);
		printf("el total a pagar con el descuento es de: %.2f",total);
	}
	else
	  if(kg>=5.01 && kg<=10){
	  	total = compra-(compra * 0.15);
	  	printf("el total a pagar con el descuento es de: %.2f",total);
	  }
	  else
	    if(kg>=2.01 && kg<=5){
	    	total = compra-(compra * 0.10);
	    	printf("el total a pagar con el descuento es de: %.2f",total);
		}
		else
		  if(kg>0 && kg<=2){
		  	printf("el total a pagar es %i",compra);
		  }
	
	return 0;
}
