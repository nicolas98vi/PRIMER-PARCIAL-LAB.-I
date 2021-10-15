#include "Perritos.h"
#include "Estadia.h"
#include "Biblioteca.h"
#include "PerritoEstadiaDuenio.h"
#include "Duenio.h"

int modificarDuenio(Duenio* DuenioModificar,int listado){
	int retorno;
	retorno=0;

	initInt(&DuenioModificar[listado].id,"Ingrese la ID del dueño: ");

	initChar(DuenioModificar[listado].nombre,"Ingrese el nombre del dueño: ");

	initInt(&DuenioModificar[listado].telefono,"Ingrese el telefono del dueño: ");

	retorno=1;

	return retorno;
}

void mostrarDuenio(Duenio* DuenioListado,int tam){
	int i;
	printf("       Nombre del Dueño           Fecha\n");
	for(i=7000;i<7000+tam;i++){
		printf("%d) %8s %6d\n",DuenioListado[i].id,DuenioListado[i].nombre,DuenioListado[i].telefono);
	}
}
