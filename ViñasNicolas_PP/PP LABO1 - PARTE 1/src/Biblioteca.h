#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "ctype.h"


#define LLENO 1
#define VACIO 0


/// @fn void initInt(int*, char*)
/// @brief Deja ingresar un int
///
/// @param numero
/// @param mensaje
void initInt(int* numero,char* mensaje);

/// @fn void initChar(char*, char*)
/// @brief Deja ingresar un char
///
/// @param palabra
/// @param mensaje
void initChar(char* palabra,char* mensaje);


/// @fn void mostrar(int, char*, char*, char*)
/// @brief Devuelve un mensaje segun el dato que ingresen en opcion
///
/// @param opcion
/// @param mesajeUno
/// @param mesajeDos
/// @param mesajeTres
void mostrar(int opcion,char* mesajeUno,char* mesajeDos,char* mesajeTres);

/// @fn void mostrarSolo(char*)
/// @brief Tiene un printf que muestra
///
/// @param mensaje
void mostrarSolo(char* mensaje);



