#include <stdio.h>

main(){
	
	int compra;
	char bolita;
	float total;
	
	printf("dijite el precio de su articulo y el color de la bolita que desea sacar\n");
	printf("B. blanco\n");
	printf("V. verde\n");
	printf("A. amarilla\n");
	printf("Z. azul\n");
	printf("R. roja\n");
    scanf("%i\n",&compra);
	scanf(" %c",&bolita);
	
	switch(bolita){
		
		case 'B': printf("el precio a pagar por su articulo es de: %i",compra);
		          break;
		case 'V': total = (float) compra-(compra * 0.10);
		          printf("el precio a pagar por su articulo es de: %.2f",total);
		          break;
		case 'A': total = (float) compra-(compra * 0.25);
		          printf("el precio a pagar por su articulo es de: %.2f",total);
		          break;
		case 'Z': total = (float) compra-(compra * 0.50);
		          printf("el precio a pagar por su articulo es de: %.2f",total);
		          break;
		case 'R': total = (float)compra-(compra * 1);
		          printf("el precio a pagar por su articulo es de: %.2f",total);
		          break;
		default: printf("la bolita dijitada no coincide con las disponibles");
		         break;
	}
	
	return 0;
}