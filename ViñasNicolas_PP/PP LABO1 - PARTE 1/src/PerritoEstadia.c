#include "Perritos.h"
#include "Estadia.h"
#include "Biblioteca.h"
#include "PerritoEstadia.h"


void subMenuModificar(ePerro* perritos,EstadiaDiaria* estadia,int tamanioIngreso, int tamPerro){
	int retorno;
	int opciones;
	int listado;
	do{
		initInt(&opciones,"1. Modificar perrito\n2. Modificar estadia\n3. Salir\nIngrese un numero: ");
	}while(opciones<=0 || opciones>3);
	switch(opciones){
	case 1:
		mostrarPerritos(perritos ,tamPerro);
		initInt(&listado,"Ingrese la ID del perro: ");
		retorno=modificarPerrito(perritos,listado);
		mostrar(retorno," ","ERROR AL CAMBIAR PERRO","Exito al cambiar Perrito");
		break;
	case 2:
		initInt(&listado,"Ingrese la ID de la estadia: ");
		retorno=ingresarDatosDiarios(estadia,listado);
		mostrar(retorno," ","ERROR AL CAMBIAR DATOS","Exito al cambiar fecha de estadia");
		break;
	case 3:
		mostrarSolo("Salio del menu de modificaciones\n");
		break;
	}
}




void mostrarDatos(ePerro* perritos,EstadiaDiaria* estadia,int tamanio,int tamPerros){
	int i;
	int j;
	printf("Nombre del duenio      Telefono      Fecha      Raza del perro     edad del perro\n");
	for(j=100000;j<100000+tamanio;j++){
		for(i=7000;i<7000+tamPerros;i++){
			if(perritos[i].id==estadia[j].idPerro && estadia[j].isEmpty==LLENO){
				printf("%s %6d %6d %8s %8s %6d\n",estadia[j].nombreDuenio,estadia[j].telefonoContacto,estadia[j].fecha,perritos[i].nombre,perritos[i].raza,perritos[i].edad);
			}
		}
	}
}





