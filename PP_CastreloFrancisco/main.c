#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"
#include "input.h"
#define CANT_SOCIOS 30
#define CANT_AUTORES 10
int main()
{
    eAutores AutoresLibros[CANT_AUTORES];
    eLibros Libros[CANT_AUTORES*2];
    eFecha FechaSocios[CANT_SOCIOS];
    eSocios Socios[CANT_SOCIOS];
    ePrestamos Prestamos[CANT_SOCIOS*2];

    int nOpcion;
    char Seguir='s';

    initAutores(AutoresLibros,CANT_AUTORES);
    initLibros(Libros,CANT_AUTORES*2);
    initSocios(Socios,CANT_SOCIOS);
    initPrestamos(Prestamos,CANT_SOCIOS*2);

    do{

        system("CLS");
        printf("**Menu de Socios**\n1-Alta\n2-Modificar\n3.Baja\n4-Listar\n5-Prestamos\n6-Salir\n");
        fflush(stdin);
        scanf("%d",&nOpcion);

        while(ValidarRangoEntero(nOpcion,6,1)!=0){
            printf("Reingrese opcion: ");
            fflush(stdin);
            scanf("%d",&nOpcion);
        }

        switch(nOpcion){

            case 1:
                    DarAltaSocio(Socios,CANT_SOCIOS);
                    getche();
                    break;

            case 2:
                    ModificarSocio(Socios,CANT_SOCIOS);
                    getche();
                    break;

            case 3:
                    BajaSocios(Socios,CANT_SOCIOS);
                    getche();
                    break;

            case 4:
                    ListarTodosSocios(Socios,CANT_SOCIOS);
                    getche();
                    break;
            case 5:
                    getche();
                    break;

            case 6: Seguir='n';
                    break;

        }

        /*printf("Desea seguir? S/N: ");
        fflush(stdin);
        Seguir=tolower(getchar());

        while(ValidarCharacter(Seguir,'s','n')!=0){
            printf("Reingrese: ");
            fflush(stdin);
            Seguir=tolower(getchar());
        }*/

    }while(Seguir=='s');





    return 1;
}
