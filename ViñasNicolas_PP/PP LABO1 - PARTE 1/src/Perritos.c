#include "Perritos.h"
#include "Estadia.h"
#include "Biblioteca.h"
#include "PerritoEstadia.h"

int modificarPerrito(ePerro* perritoModificar,int listado){
	int retorno;
	retorno=0;

	initInt(&perritoModificar[listado].edad,"Ingrese la edad del perro: ");

	initChar(perritoModificar[listado].nombre,"Ingrese el nombre del perro: ");

	initChar(perritoModificar[listado].raza,"Ingrese la raza del perro: ");

	retorno=1;

	return retorno;
}

void mostrarPerritos(ePerro* perritos,int tam){
	int i;
	printf("    Nombre del perrito           Edad del perrito         Raza del perrito\n");
	for(i=7000;i<7000+tam;i++){
		printf("%d %8s %6d %8s\n",perritos[i].id,perritos[i].nombre,perritos[i].edad,perritos[i].raza);
	}
}

void promedioEdadPerritos(ePerro* perritos,int tam){
	int i;
    float suma;
    suma=0;
    float promedio;

	for(i=7000;i<7000+tam;i++){

		suma=suma+perritos[i].edad;

	}
	promedio=suma/(float)tam;

	printf("El promedio en edades de los %d perros ingresados es %.2f",tam,promedio);
}
