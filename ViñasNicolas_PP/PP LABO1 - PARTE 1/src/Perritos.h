#define TAMPerrito 3

struct{
int id;
char nombre[21];
char raza[21];
int edad;
}typedef ePerro;

/// @fn int modificarPerrito(ePerro*, int)
/// @brief Modifica  los datos de la estructura ePerro
///
/// @param perritoModificar
/// @param listado
/// @return
int modificarPerrito(ePerro* perritoModificar,int listado);


/// @fn void mostrarPerritos(ePerro*, int)
/// @brief Muestra los datos de la estructura ePerro
///
/// @param perritos
/// @param tam
void mostrarPerritos(ePerro* perritos,int tam);


/// @fn void promedioEdadPerritos(ePerro*, int)
/// @brief suma las edades de los perros y da el promedio
///
/// @param perritos
/// @param tam
void promedioEdadPerritos(ePerro* perritos,int tam);
