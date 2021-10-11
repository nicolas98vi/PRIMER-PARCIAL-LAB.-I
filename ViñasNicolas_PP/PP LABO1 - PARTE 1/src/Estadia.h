#define TAM 100


struct{
int id;
char nombreDuenio[21];
int telefonoContacto;
int idPerro;
int fecha;
int isEmpty;
}typedef EstadiaDiaria;


int initEmployees(EstadiaDiaria* list, int len);

int ingresarDatosDiarios(EstadiaDiaria* ingresoDeTiempo,int lista);

int bajaLogica(EstadiaDiaria* ingresoDeTiempo,int tamanio);

void mostrarEstadia(EstadiaDiaria* ingresoDeTiempo,int tamanio);
