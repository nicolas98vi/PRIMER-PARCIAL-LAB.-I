#define TAMPerrito 3

struct{
int id;
char nombre[21];
char raza[21];
int edad;
}typedef ePerro;


int modificarPerrito(ePerro* perritoModificar,int listado);

void mostrarPerritos(ePerro* perritos,int tam);

void promedioEdadPerritos(ePerro* perritos,int tam);
