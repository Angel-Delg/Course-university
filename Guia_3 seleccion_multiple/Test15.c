#include<stdio.h>

int main(void){
	
	int edad;
	float pulsaciones;
	char sexo;
	
	printf("dijite su edad y su sexo\n");
	scanf("%i\n",&edad);
	scanf(" %c",&sexo);
	
	switch(sexo){
		
		case 'M': pulsaciones = (210-(float)edad)/10;
		          printf("el numero de pulsaciones que deberia tener por cada 10 segundos es de: %.2f",pulsaciones);
		          break;
		case 'F': pulsaciones = (220-(float)edad)/10;
		          printf("el numero de pulsaciones que deberia tener por cada 10 segundos es de: %.2f",pulsaciones);
		          break;
		default: printf("este sexo no existe, creo");
		
	}
	
	return 0;
}
