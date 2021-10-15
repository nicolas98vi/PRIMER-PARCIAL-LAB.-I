#include "Perritos.h"
#include "Estadia.h"
#include "Biblioteca.h"
#include "PerritoEstadiaDuenio.h"
#include "Duenio.h"

void subMenuModificar(ePerro* perritos,EstadiaDiaria* estadia,Duenio* DuenioEstructura,int tamanioIngreso, int tamPerro,int TamanioDuenios){
	int retorno;
	int opciones;
	int listado;
	do{
		initInt(&opciones,"1. Modificar perrito\n2. Modificar estadia\n3. Modificar Duenio\n4. Salir\nIngrese un numero: ");
	}while(opciones<=0 || opciones>4);
	switch(opciones){
	case 1:
		mostrarPerritos(perritos ,tamPerro);
		initInt(&listado,"Ingrese la ID del perro: ");
		retorno=modificarPerrito(perritos,listado);
		mostrar(retorno," ","ERROR AL CAMBIAR PERRO","Exito al cambiar Perrito");
		mostrarPerritos(perritos,tamPerro);
		break;
	case 2:
		mostrarEstadia(estadia,tamanioIngreso);
		initInt(&listado,"Ingrese la ID de la estadia: ");
		retorno=ingresarDatosDiarios(estadia,listado);
		mostrar(retorno," ","ERROR AL CAMBIAR DATOS","Exito al cambiar fecha de estadia");
		mostrarEstadia(estadia,tamanioIngreso);
		break;
	case 3:
		mostrarDuenio(DuenioEstructura,TamanioDuenios);
		initInt(&listado,"Ingrese la ID de la estadia: ");
		retorno=ingresarDatosDiarios(DuenioEstructura,listado);
		mostrar(retorno," ","ERROR AL CAMBIAR DUEÑO","Exito al cambiar dueño");
		mostrarDuenio(DuenioEstructura,TamanioDuenios);

		break;
	case 3:
		mostrarSolo("Salio del menu de modificaciones\n");
		break;
	}
}




void mayorEstadiaDePerro(ePerro* perritos,EstadiaDiaria* estadia,int tamanioIngreso, int tamPerro){
	int i;
	int j;
	int k;
	int contadorUno;
	contadorUno=0;
	int mayor;
	mayor=0;
	char guardarNombre[21];

		for(i=7000;i<7000+tamPerro;i++){
			for(j=100000;j<100000+tamanioIngreso;j++){
					if(perritos[i].id==estadia[j].idPerro && estadia[j].isEmpty==LLENO){
						contadorUno++;
					}
				}
			if(contadorUno>mayor){
				contadorUno=mayor;
				strcpy(guardarNombre,perritos[i].nombre);
			}
	}

		printf("El nombre del perro con mas estadias es %s",guardarNombre);
}

void listadoDePerroEstadia(ePerro* perritos,EstadiaDiaria* estadia,int tamanioIngreso, int tamPerro){

	int i;
	int j;

	mostrarSolo("       Nombre dell perro        Raza del perro        Edad del perro        Id de la estadia       Nombre del dueño      Telefono del dueño      Fecha de ingreso");
	for(i=7000;i<7000+tamPerro;i++){
				for(j=100000;j<100000+tamanioIngreso;j++){
					if(perritos[i].id==estadia[j].idPerro && estadia[j].isEmpty==LLENO){
						printf("%d) %8s %8s %8d %8d %8s %8d %8d",perritos[i].id,perritos[i].nombre,perritos[i].raza,perritos[i].edad,estadia[j].id,estadia[j].nombreDuenio,estadia[j].telefonoContacto,estadia[j].fecha);
					}
				}
     }
}



