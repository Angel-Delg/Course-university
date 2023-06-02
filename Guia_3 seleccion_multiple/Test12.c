#include<stdio.h>

main(){
	
	int edad;
	char salud;
	
	printf("dijite la edad\n");
	scanf("%i",&edad);
	
    if(edad>=65){
    	printf("jubilacion inmediata\n");
	}
	else
	  if(edad>=60 && edad<=64){
	  	printf("dijite la salud del individuo\n");
	  	scanf(" %c",&salud);
	  	
	  	switch(salud){
	  		
	  		case 'e': printf("Reporte normal\n");
	  		          break;
	  		case 'b': printf("Vacaciones\n");
	  		          break;
	  		case 'r': printf("Descanso hasta la Jubilacion\n");
	  		          break;
	  		case 'm': printf("solicitar evaluacion medica para jubilacion incapacidad\n");
	  		          break;
	  		default: printf("error no existe\n");
	  		         break;
	  		
		  }
	  }
	  else{
	  	printf("no existe el rango de edad");
	  }
	
	return 0;
}