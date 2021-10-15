#include "Perritos.h"
#include "Estadia.h"
#include "Biblioteca.h"
#include "PerritoEstadia.h"

int initEmployees(EstadiaDiaria* list, int len)
{
	int retorno;
	retorno=0;
	int i;
	for(i=0; i<len; i++)
	{
		list[i].isEmpty = VACIO;
		retorno=1;
	}
	return retorno;
}

int ingresarDatosDiarios(EstadiaDiaria* ingresoDeTiempo,int lista){
	int retorno;
	retorno=0;

	ingresoDeTiempo[lista].id=lista;

	initChar(ingresoDeTiempo[lista].nombreDuenio,"Ingrese el nombre del duenio: ");

	do{
		initInt(&ingresoDeTiempo[lista].telefonoContacto,"Ingrese el telefono del dueño: ");
	}while(ingresoDeTiempo[lista].telefonoContacto<=40000000);

	initInt(&ingresoDeTiempo[lista].idPerro,"Ingrese el ID del perrito: ");

	do{
		initInt(&ingresoDeTiempo[lista].fecha,"Ingrese la fecha: ");
	}while(ingresoDeTiempo[lista].fecha<=0);


	retorno=1;

	return retorno;
}

int bajaLogica(EstadiaDiaria* ingresoDeTiempo,int tamanio){
	int retorno;
	retorno=0;
	int listado;
	int i;
	int pregunta;
	initInt(&listado,"Ingrese el ID a dar de baja: ");

	for(i=100000;i<100000+tamanio;i++){
		if(ingresoDeTiempo[i].id==listado && ingresoDeTiempo[i].isEmpty==LLENO){
			retorno=-1;
			do{
				initInt(&pregunta,"Seguro que quiere borrarlo? (1.si/2-no)");
			}while(pregunta!=1 && pregunta != 2);

			if(pregunta==1){
				ingresoDeTiempo[i].isEmpty=VACIO;
				retorno=1;
			}
		}
	}
	return retorno;
}

void mostrarEstadia(EstadiaDiaria* ingresoDeTiempo,int tamanio){
	int i;
	printf("    Nombre del dueño           Telefono         Fecha\n");
	for(i=100000;i<100000+tamanio;i++){
		printf("%6s %6d %8d\n",ingresoDeTiempo[i].nombreDuenio,ingresoDeTiempo[i].telefonoContacto,ingresoDeTiempo[i].fecha);
	}
}

void ordenarPorFecha(EstadiaDiaria* estadia,int tamanio){
	int i;
	int j;

	int auxiliarfecha;
	int auxiliarID;
	char auxiliarnombreDuenio[21];
	int auxiliartelefonoContacto;
	int auxiliaridPerro;

	for(j=100000;j<100000+tamanio;j++){
		for(i=100000;i<100000+tamanio;i++){
				if(estadia[i].fecha<estadia[j].fecha && estadia[j].isEmpty==LLENO && estadia[i].isEmpty==LLENO){

					auxiliarfecha=estadia[j].fecha;
					estadia[j].fecha=estadia[i].fecha;
					estadia[i].fecha=auxiliarfecha;

					auxiliarID=estadia[j].id;
					estadia[j].id=estadia[i].id;
					estadia[i].id=auxiliarID;

					strcpy(auxiliarnombreDuenio,estadia[j].nombreDuenio);
					strcpy(estadia[j].nombreDuenio,estadia[i].nombreDuenio);
					strcpy(estadia[i].nombreDuenio,auxiliarnombreDuenio);

					auxiliartelefonoContacto=estadia[j].telefonoContacto;
					estadia[j].telefonoContacto=estadia[i].telefonoContacto;
					estadia[i].telefonoContacto=auxiliartelefonoContacto;

					auxiliaridPerro=estadia[j].idPerro;
					estadia[j].idPerro=estadia[i].idPerro;
					estadia[i].idPerro=auxiliaridPerro;

				}
			}
		}
	mostrarEstadia(estadia, tamanio);
}
