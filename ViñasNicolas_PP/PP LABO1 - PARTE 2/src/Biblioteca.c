#include "Perritos.h"
#include "Estadia.h"
#include "Biblioteca.h"

#include "PerritoEstadiaDuenio.h"



void initInt(int* numero,char* mensaje){
	printf("%s",mensaje);
	fflush(stdin);
	scanf("%d",&*numero);
}


void initChar(char* palabra,char* mensaje){
	printf("%s",mensaje);
	fflush(stdin);
	scanf("%s",palabra);
}


void mostrar(int opcion,char* mesajeUno,char* mesajeDos,char* mesajeTres){
	switch(opcion){
		case -1:
			mostrarSolo(mesajeUno);
		break;
		case 0:
			mostrarSolo(mesajeDos);
		break;
		case 1:
			mostrarSolo(mesajeTres);
		break;
	}
}

void mostrarSolo(char* mensaje){
	printf("%s\n",mensaje);
}






