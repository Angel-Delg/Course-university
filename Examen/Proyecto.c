#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <windows.h>

#define MAX_LETTER 100
#define MAX_HABITACIONES 90
#define MAX_SIZE 100

/*Definimos los costos de los servicios del hospital los precios estan en dolares*/
#define COSTO_CAMA 100.0
#define COSTO_NOCHE 50.0
#define COSTO_CIRUGIA 500.0
#define COSTO_ALIMENTACION 20.0
#define COSTO_AMBULANCIA 200.0
#define COSTO_HONORARIOS_DOCTORES 300.0

/*Tasa de cambio cambio de moneda*/
#define	DOLAR 36.5
#define	EURO 1.09

/*Definimos las estructuras de datos*/
typedef struct{
	char nombrePaciente[MAX_LETTER];
	char direccion[MAX_LETTER];
	int formaPago;
	char numeroTarjeta[MAX_LETTER];
	int tipoMoneda;
} Paciente;

typedef struct{
	int codigo;
	char descripcion[MAX_LETTER];
	int n_noches;
	int n_habitacion;
	int n_cama;
	int n_piso;
	float costo;
}Servicio;

typedef struct{
	Paciente paciente;
	Servicio servicio;
	char nombreEdificio[MAX_LETTER];
	float TotalPagar;
	float CantidadPagada;
	float CantidadPendiente;
} Factura;

/* Estas estructuras definen los costos de los medicamentos */
typedef struct{
	char nombreMedicamento[MAX_LETTER];
	float precio;
	int cantidad;
}Medicamento;

typedef struct{
	char nombreTratamiento[MAX_LETTER];
	float precio;
}Tratamiento;

// Prototipos de funciones
Factura registrarEntradaPaciente(Factura);
Factura registrarSalidaPaciente(Factura);
Factura registrarServiciosUsados(Factura);
Factura mostrarMedicamentos(Factura);
void GenerarFactura(Factura);

int main(void){
	Factura factura;

	factura.TotalPagar = 0.0;
	factura.CantidadPagada = 0.0;
	factura.CantidadPendiente = 0.0;
	strcpy(factura.nombreEdificio, "Hospital la Union");

	// Primero registramos la entrada del paciente
	factura = registrarEntradaPaciente(factura);
	factura = registrarServiciosUsados(factura);
	factura = registrarSalidaPaciente(factura);

	// // Listo para terminar
	system("cls");
	GenerarFactura(factura);
	return 0;
}

Factura registrarEntradaPaciente(Factura factura){
	
	printf("\t\t=====================\n");
	printf("\t\t= Hospital la union =\n");
	printf("\t\t=====================\n\n");

	printf("\t\t==Registro Entrada==\n");
	printf("\tNombre del paciente: ");
	fgets(factura.paciente.nombrePaciente,MAX_LETTER,stdin);

	printf("\tDirrecion: ");
	fgets(factura.paciente.direccion,MAX_LETTER, stdin);

	printf("\n\n");

	return factura;
}


Factura registrarServiciosUsados(Factura factura){

	bool Ambulacia = false, Alimentacion = false , Honorarios = false;

	int option, subOption, cantidadMaxima = 0;
	int NumeroNoches = 0;

	fflush(stdin);

	system("cls");
	printf("\t\t==================\n");
	printf("\t\t=== Servicios. ===\n");
	printf("\t\t==================\n\n");
	
	printf("\t1) Cama\n");
	printf("\t2) Noche\n");
	printf("\t3) Medicamentos\n");
	printf("\t4) Cirujia\n");
	printf("\tOpcion 0 para salir: ");
	scanf("%d", &option);

	switch(option){
		case 1: {
			system("cls");

			printf("\t\t============================================\n");
			printf("\t\t=== Ha seleccionado el servicio de cama. ===\n");
			printf("\t\t============================================\n\n");

			printf("\tIngrese no Habitacion: ");
			scanf("%i", &factura.servicio.n_habitacion);

			printf("\tIngrese no Cama: ");
			scanf("%i", &factura.servicio.n_cama);

			printf("\tIngrse no Piso: ");
			scanf("%i", &factura.servicio.n_piso);

			strcpy(factura.servicio.descripcion, "Cama");
			getchar();

			factura.servicio.codigo = option;
			factura.TotalPagar += COSTO_CAMA;
			factura.servicio.costo += COSTO_CAMA;

			// extra
			printf("\n\tUtilizo algun otro servicio\n");
			printf("\t1) Ambulacia\n");
			printf("\t2) Alimentacion\n");
			printf("\t3) Honorarios Doctores\n");
			printf("\tOpcion 0 para salir\n");
			
			do{

				printf("\tIngrese: ");	
				scanf("%i", &subOption);

				if (subOption == 1) {
					if (Ambulacia) {
						printf("\n\tYa se ha cargado el gasto asignado para Ambulancia.\n");
						continue;
					} else {
						Ambulacia = true;
						factura.TotalPagar += COSTO_AMBULANCIA;
						factura.servicio.costo += COSTO_AMBULANCIA;
						printf("\n\tSe ha cargado el gasto asignado para Ambulancia.\n");
					}
				} 
				
				else if (subOption == 2) {
					if (Alimentacion) {
						printf("\n\tYa se ha cargado el gasto asignado para Alimentacion.\n");
						continue;
					} else {
						Alimentacion = true;
						factura.TotalPagar += COSTO_ALIMENTACION;
						factura.servicio.costo += COSTO_ALIMENTACION;
						printf("\n\tSe ha cargado el gasto asignado para Alimentacion.\n");
					}
				} 
								
				else if (subOption == 3) {
					if (Honorarios) {
						printf("\n\tYa se ha cargado el gasto asignado para Honorarios de Doctores.\n");
						continue;
					} else {
						Honorarios = true;
						factura.TotalPagar += COSTO_HONORARIOS_DOCTORES;
						factura.servicio.costo += COSTO_HONORARIOS_DOCTORES;
						printf("\n\tSe ha cargado el gasto asignado para Honorarios de Doctores.\n");
					}
				}
			}while(subOption != 0);

			break;
		}

		case 2: {
			system("cls");
			printf("\t\t============================================\n");
			printf("\t\t=== Ha seleccionado el servicio de noche ===\n");
			printf("\t\t============================================\n\n");

			printf("\tNumero noches: ");
			scanf("%i", &factura.servicio.n_noches);

			factura.servicio.costo += COSTO_NOCHE * factura.servicio.n_noches;
			strcpy(factura.servicio.descripcion, "Noche");
			getchar();
			
			factura.servicio.codigo = option;
			// se le hace el cargo
			factura.TotalPagar += factura.servicio.costo;

			break;
		}

		case 3: {
			system("cls");
			factura = mostrarMedicamentos(factura);
			strcpy(factura.servicio.descripcion, "Medicamentos");
			factura.servicio.codigo = option;
			break;
		}

		case 4: {
			system("cls");
			printf("\t\t===========================\n");
			printf("\t\t=== Servicio de Cirujia ===\n");
			printf("\t\t===========================\n\n");

			factura.servicio.codigo = option;
			strcpy(factura.servicio.descripcion, "Cirujia");
			factura.servicio.costo += COSTO_CIRUGIA;
			factura.TotalPagar += COSTO_CIRUGIA;

			printf("\tIngrese las noches de hospitalizacion\n");
			scanf("%d", &factura.servicio.n_noches);
			/* Se hace el cargo por noches del hospital*/
			factura.TotalPagar += COSTO_NOCHE * factura.servicio.n_noches;

			printf("\tIndique si recibio alimentacion hospitalaria\n");
			printf("\t[ Si = 1, No = 0 ]");
			scanf("%d", &subOption);

			if(subOption == 1){
				factura.TotalPagar += COSTO_ALIMENTACION;
				factura.servicio.costo += COSTO_ALIMENTACION;
			}

			break;
		}
	}

	return factura;
}

Factura registrarSalidaPaciente(Factura factura){

	float cantidadPagar = 0.0;

	printf("\t\t==Registro Salida==\n\n");

	printf("\tMonto: $%2.f\n\n", factura.TotalPagar);

	printf("\tIndique su forma de pago\n");
	printf("\tUsar [1 - 2] como botones de opcion\n\n");
	printf("\t1) Efectivo\n");
	printf("\t2) Tarjeta\n");

	while(factura.paciente.formaPago != 1 && factura.paciente.formaPago != 2){
		printf("\tIndique correctamente: ");
		scanf("%i", &factura.paciente.formaPago);
	}

	if(factura.paciente.formaPago == 2){
		printf("\n\tIngrese el numero de tarjeta: ");
		fgets(factura.paciente.numeroTarjeta, MAX_LETTER, stdin);
		getchar();

		// Cancelamos el pago
		factura.CantidadPagada += factura.TotalPagar;
		factura.CantidadPendiente = 0;
	}

	if(factura.paciente.formaPago == 1){
		printf("\n\tIngrese el tipo de moneda\n");
		printf("\t1) Cordoba\n");
		printf("\t2) Dolar\n");
		printf("\t3) Euro\n");

		fflush(stdin);
		printf("\tIndique Correctamente: ");
		scanf("%i", &factura.paciente.tipoMoneda);

		switch(factura.paciente.tipoMoneda){
			case 1 :{
				printf("\tMonto Pagar: C$");
				scanf("%f", &cantidadPagar);

				factura.CantidadPendiente = factura.TotalPagar - (cantidadPagar / DOLAR);
				factura.CantidadPagada = cantidadPagar / DOLAR;
				
				break;
			}
			case 2 :{
				printf("\tMonto Pagar: $");
				scanf("%f", &cantidadPagar);

				factura.CantidadPagada = cantidadPagar;
				factura.CantidadPendiente = factura.TotalPagar - cantidadPagar;
				break;
			}
			case 3: {
				printf("\tMonto Pagar: %c",128);
				scanf("%f", &cantidadPagar);

				factura.CantidadPagada = cantidadPagar * EURO;
				factura.CantidadPendiente = factura.TotalPagar - (cantidadPagar * EURO);
			}

			default :{
				printf("\t\nTipo de moneda no valida!");
			}
		}
	}

	return factura;
}

Factura mostrarMedicamentos(Factura factura){

	int tipoMedicamento = 0;
	int tipoTratamiento, i;

	Medicamento medicamentos[] = {
		{ "Paracetamol", 5.99 },
		{ "Ibuprofeno", 7.99 },
		{ "Amoxicilina", 12.99 },
		{ "Omeprazol", 8.49 },
		{ "Loratadina", 6.29 },
		{ "Diazepam", 9.99 },
		{ "Simvastatina", 15.49 },
		{ "Metformina", 7.79 },
		{ "Tramadol", 10.99 },
		{ "Ciprofloxacina", 11.29 },
		{ "Losartan", 9.49 },
		{ "Atorvastatina", 14.99 },
		{ "Aspirina", 3.99 },
		{ "Escitalopram", 12.79 },
		{ "Metronidazol", 8.49 },
		{ "Levotiroxina", 11.99 },
		{ "Enalapril", 9.29 },
		{ "Prednisona", 7.49 },
		{ "Clotrimazol", 5.99 },
		{ "Alprazolam", 10.99 }
	};

	Tratamiento Tratamientos[] = {
		{"Electrocardiograma", 10.5},
		{"Dialisis", 4.5},
		{"Analisis de sangre", 6.5},
	};

	printf("\t\t==============================\n");
	printf("\t\t== Servicio de Medicamentos ==\n");
	printf("\t\t==============================\n\n");

	for(i = 0; i < sizeof(medicamentos) / sizeof(medicamentos[0]); i++){
		printf("\t%d) %s\n", i + 1, medicamentos[i].nombreMedicamento);
	}

	printf("\n\tNota: Ingrese -1 si no hizo gatos de medicamentos o dejar de agregar\n");
	
	while(tipoMedicamento != -1){
		printf("\tIngrese: ");	
		scanf("%i", &tipoMedicamento);

		if(tipoMedicamento != -1){
			printf("\tCantidad: ");
			scanf("%i", &medicamentos[tipoMedicamento - 1].cantidad);
			/* se hace el cargo por medicamentos */
			factura.TotalPagar += medicamentos[tipoMedicamento - 1].precio * medicamentos[tipoMedicamento - 1].cantidad; 
			factura.servicio.costo += medicamentos[tipoMedicamento - 1].precio * medicamentos[tipoMedicamento - 1].cantidad;
		}
	}

	printf("\n");
	printf("\t\t==================\n");
	printf("\t\t== Tratamientos ==\n");
	printf("\t\t==================\n\n");

	for(i = 0; i < sizeof(Tratamientos) / sizeof(Tratamientos[0]); i++){
		printf("\t%d) %s\n", i + 1, Tratamientos[i].nombreTratamiento);
	}

	printf("\tIngrese: ");
	scanf("%i", &tipoTratamiento);

	if(tipoTratamiento != -1){
		/* Se hace el cargo por tratamiento*/
		factura.TotalPagar += Tratamientos[tipoTratamiento - 1].precio;
		factura.servicio.costo += Tratamientos[tipoTratamiento - 1].precio;
	}

	return factura;
}

/* Paso final Generar La factura */
void GenerarFactura(Factura factura){

	printf("\t\t==================\n");
	printf("\t\t==== Factura. ====\n");
	printf("\t\t==================\n\n");

	printf("\tEdificio: \t\t%s\n", factura.nombreEdificio);
	printf("\tNombre Paciente: \t%s\n", factura.paciente.nombrePaciente);
	printf("\tDireccion: \t\t%s\n", factura.paciente.direccion);

	if(factura.paciente.formaPago == 1){
		// Indicamos el tipo de moneda
		printf("\tMoneda: \t\t%s\n", (factura.paciente.tipoMoneda == 1) ? "Cordoba" : (factura.paciente.tipoMoneda == 2) ? "Dolar" : "Euro");	
	}else{
		// Mostramos los ultimos digitos de la Tarjeta
		printf("\tTarjeta: \t\txxxxxx ");
		int len = strlen(factura.paciente.numeroTarjeta);
		int i;

		for(i = len - 4; i < len; i++){
			printf("%c", factura.paciente.numeroTarjeta[i]);
		}
		printf("\n");
	}

	printf("\tSevicios Usados\n\n");

	/* imprimir detalles del servicio */
	if (factura.servicio.codigo == 1) {			
		printf("\tDetalle: \t\t%s\n", factura.servicio.descripcion);
		printf("\tNo_Piso: \t\t%i\n", factura.servicio.n_piso);
		printf("\tNo_Habitacion: \t\t%i\n", factura.servicio.n_habitacion);
		printf("\tNo_Cama: \t\t%i\n", factura.servicio.n_cama);
		printf("\tCosto Total: \t\t$%.2f\n", factura.servicio.costo);

	} else if (factura.servicio.codigo == 2) {

		printf("\tDetalle: \t\t%s\n", factura.servicio.descripcion);
		printf("\tNo_noches: \t\t%i\n", factura.servicio.n_noches);
		printf("\tCosto Total: \t\t$%.2f\n", factura.servicio.costo);

	} else if (factura.servicio.codigo == 3) {
		printf("\tDetalle: \t\t%s\n", factura.servicio.descripcion);
		printf("\tCosto Total: \t\t$%.2f\n", factura.servicio.costo);

	} else if (factura.servicio.codigo == 4){
		printf("\tDetalle: \t\t%s\n", factura.servicio.descripcion);
		printf("\tCosto Total: \t\t$%.2f\n", factura.servicio.costo);
	}

	printf("\n");
	printf("\tPagado: \t\t$%.2f\n",factura.CantidadPagada);
	printf("\tPendiente: \t\t$%.2f\n", factura.CantidadPendiente);
	printf("\tTotal a pagar: \t\t$%.2f\n", factura.TotalPagar);

	printf("\n\t=============================\n");
	printf("\t== Gracias por preferirnos ==\n");
	printf("\t=============================\n\n");
	printf("\t==== Hospital la union. =====\n");
}