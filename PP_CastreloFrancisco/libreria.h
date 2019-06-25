#include "input.h"

typedef struct{

 int nCodigo;
 char szNombre[31];
 char szApellido[31];
 int isEmpty;

}eAutores;

typedef struct{

 int nCodigoLibro;
 char szTitulo[51];
 int nCodigoAutor;
 int isEmpty;
}eLibros;


typedef struct{

    int nDia;
    int nMes;
    int nAnio;

}eFecha;


typedef struct{

 int nCodigoSocio;
 char szApellido[31];
 char szNombre[31];
 char cSexo;
 char szTelefono[16];
 char szEMail[31];
 eFecha FechaAsocioado;
 int isEmpty;

}eSocios;


typedef struct{

 int nCodigoPrestamo;
 int nCodigoLibro;
 int nCodigoSocio;
 eFecha FechaPrestamo;
 int isEmpty;
}ePrestamos;


/********************************************************************************************/
int initAutores(eAutores*, int);
int initLibros(eLibros*, int);
int initSocios(eSocios*, int);
int initPrestamos(ePrestamos*, int);
/**********************************************************************************************/
int buscarLibreAutores(eAutores*, int);
int buscarLibreLibros(eLibros*, int);
int buscarLibreSocios(eSocios*, int);
int buscarLibrePrestamos(ePrestamos*, int);
/************************************************************************************************/
int addAutor(eAutores*, char [],char [],int);
int addLibro(eLibros* ,char [],int,int);
int addSocio(eSocios*, char [],char [],char,char[],char[],eFecha,int);
int addPrestamo(ePrestamos*, int,int,eFecha,int);
/**************************************************************************************************/
int findAutorById(eAutores*, int,int);
int findLibroById(eLibros*, int,int);
int findSocioById(eSocios*, int,int);
int findPrestamoById(ePrestamos*, int,int);
/*****************************************************************************************/
int removeAutor(eAutores*, int, int);
int removeLibro(eLibros*, int, int);
int removeSocio(eSocios*, int, int);
/*****************************************************************************************/

void DarAltaSocio(eSocios*,int);
void ModificarSocio(eSocios*, int);
void BajaSocios(eSocios*, int);
void ListarSocio(eSocios*,int);
void ListarTodosSocios(eSocios*,int);
