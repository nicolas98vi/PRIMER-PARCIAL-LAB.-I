/*
 ============================================================================
 Name        : PP.c
 Author      : Viñas Nicolas
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include "Perritos.h"
#include "Estadia.h"
#include "Biblioteca.h"
#include "PerritoEstadiaDuenio.h"
#include "Duenio.h"

int main(void) {
	setbuf(stdout, NULL);
	ePerro arrayPerritos[TAMPerrito]={{7000, "lobo", "Sharpei", 2},{7001, "Sheila", "Golden", 12},{7002, "Reina", "Galgo", 13}};
	EstadiaDiaria arrayFechas[TAM];
	Duenio arrayDuenio[tamDuenio]={{3000, "Jose",47373732},{3001, "Luis",47372732},{3002, "Esteban",47322732},{3003, "Josefa",47313232},{3004, "Lusia", 41213232}};
	int opcion;
	int cantidadFechas;
	cantidadFechas=100000;
    int retorno;
    retorno=initEmployees(arrayFechas, TAM);
    mostrar(retorno," ","ERROR AL INICIALIZAR","Exito al inizialisar");

	do
	{

		initInt(&opcion,"-------------------------------------\n"
				 "1. RESERVAR ESTADIA\n"
				 "2. MODIFICAR ESTADIA\n"
				 "3. CANCELAR ESTADÍA\n"
				 "4. LISTAR ESTADÍAS\n"
				 "5. LISTAR PERROS\n"
	             "6. Promedio de edad de los perros\n"
	             "7. El perro que tiene más estadías reservadas\n"
				 "8. Listado de perros con sus estadías diarias reservadas\n"
				 "9. Salir\n"
				 "-------------------------------------\n"
				 "Ingrese una opcion: ");
		while(opcion<=0 || opcion>=9){
			initInt(&opcion,"-------------------------------------\n"
					"ERROR AL INGRESAR NUMERO"
					"1. RESERVAR ESTADIA\n"
					"2. MODIFICAR ESTADIA\n"
					"3. CANCELAR ESTADÍA\n"
					"4. LISTAR ESTADÍAS\n"
				    "5. LISTAR PERROS\n"
				    "6. Promedio de edad de los perros\n"
					"7. El perro que tiene más estadías reservadas\n"
					"8. Listado de perros con sus estadías diarias reservadas\n"
					"9. Salir\n"
					"-------------------------------------\n"
					"Ingrese una opcion valida: ");
		}
		switch(opcion)
		{
		   case 1:
			   cantidadFechas++;
			   mostrarSolo("Ingresar datos del ingreso----------------------------------------------\n");
			   retorno=ingresarDatosDiarios(arrayFechas,cantidadFechas);
			   mostrar(retorno," ","ERROR AL INGREZAR DATOS","Exito al ingrezar datos de estadia!!!");
			   system("pause");
			break;
			case 2:
				subMenuModificar(arrayPerritos,arrayFechas,arrayDuenio,TAM,TAMPerrito,tamDuenio);
				system("pause");
				break;
			case 3:
				bajaLogica(arrayFechas,TAM);
				mostrar(retorno,"Baja canselada","ERROR AL DAR DE BAJA","Exito al dar de baja!!!");
				system("pause");
				break;
			case 4:
				mostrarEstadia(arrayFechas,TAM);
				system("pause");
				break;
			case 5:
				mostrarPerritos(arrayPerritos,TAMPerrito);
				system("pause");
				break;
			case 6:
			    promedioEdadPerritos(arrayPerritos,3);
				system("pause");
				break;
			case 7:
				mayorEstadiaDePerro(arrayPerritos,arrayFechas,TAM,TAMPerrito);
				system("pause");
				break;
			case 8:
				listadoDePerroEstadia(arrayPerritos,arrayFechas,TAM,TAMPerrito);
				system("pause");
				break;
			case 9:
				mostrarSolo("Salio del menu!!!\n");
				system("pause");
				break;
		}
	}while(opcion != 7);

	return EXIT_SUCCESS;
}



