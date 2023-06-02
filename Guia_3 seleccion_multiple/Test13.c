#include<stdio.h>

int main(void){
	
	int pasajeros,total,hora;
	char vehiculo;
	
	printf("dijite el tipo del vehiculo si es camion o automovil, C representa camion y A automovil\n");
	scanf(" %c",&vehiculo);
	
	switch(vehiculo){
		
		case 'c': printf("dijite el numero de pasajeros y el tipo de hora \n");
		          printf("1. alta congestion\n");
		          printf("2. menor congestion\n");
		          scanf("%i%i",&pasajeros,&hora);
		          
		          if((pasajeros>3) && (hora == 1)){
					printf("la cantidad a cobrar es %i",50);
				  }
				  else
				    if(hora == 2){
				    	printf("la cantidad a cobrar es %i",30);
					}
		          
		          break;
			
		case 'a': printf("dijite el numero de pasajeros y el tipo de hora \n");
		          printf("1. alta congestion\n");
		          printf("2. menor congestion\n");
		          scanf("%i%i",&pasajeros,&hora);
		          
		          if((pasajeros>3) && (hora == 1)){
					printf("no paga peaje");
				  }
				  else
				    if(hora == 2){
				    	printf("la cantidad a cobrar es %i",25);
					}
		          
		          break;
		
	}
	
	return 0;
}
