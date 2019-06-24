#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "libreria.h"
#include "input.h"

int initAutores(eAutores* Autores, int nCant){

    int initReturn = 0, i;


            for(i=0;i<nCant;i++){


                Autores[i].isEmpty = 1;

            }

    return initReturn;
}



int initLibros(eLibros* Libros, int nCant){

    int initReturn = 0, i;


            for(i=0;i<nCant;i++){


                Libros[i].isEmpty = 1;

            }

    return initReturn;
}


int initSocios(eSocios* Socios, int nCant){


    int initReturn = 0, i;


            for(i=0;i<nCant;i++){


                Socios[i].isEmpty = 1;

            }

    return initReturn;
}


int initPrestamos(ePrestamos* Prestamos, int nCant){


    int initReturn = 0, i;


            for(i=0;i<nCant;i++){


                Prestamos[i].isEmpty = 1;

            }

    return initReturn;
}




int buscarLibreAutores(eAutores* Autores, int nCant){

    int nIndexLibre= -1 ,i;

    for(i=0;i<nCant;i++){

        if(Autores[i].isEmpty == 1){


            nIndexLibre = i;
            break;
        }

    }

    return nIndexLibre;
}

int buscarLibreLibros(eLibros* Libros, int nCant){

    int nIndexLibre= -1 ,i;

    for(i=0;i<nCant;i++){

        if(Libros[i].isEmpty == 1){


            nIndexLibre = i;
            break;
        }

    }

    return nIndexLibre;
}

int buscarLibreSocios(eSocios* Socios, int nCant){

    int nIndexLibre= -1 ,i;

    for(i=0;i<nCant;i++){

        if(Socios[i].isEmpty == 1){


            nIndexLibre = i;
            break;
        }

    }

    return nIndexLibre;
}


int buscarLibrePrestamos(ePrestamos* Prestamos, int nCant){

    int nIndexLibre= -1 ,i;

    for(i=0;i<nCant;i++){

        if(Prestamos[i].isEmpty == 1){


            nIndexLibre = i;
            break;
        }

    }

    return nIndexLibre;
}



int addAutor(eAutores* Autores, char szName[],char szLastName[],int nCant){

    int nIndexLibre;

    nIndexLibre = buscarLibreAutores(Autores, nCant);


    if(nIndexLibre != -1){

        Autores[nIndexLibre].nCodigo = nIndexLibre+100;
        strcpy(Autores[nIndexLibre].szNombre, szName);
        strcpy(Autores[nIndexLibre].szApellido, szLastName);
        Autores[nIndexLibre].isEmpty = 0;

    }else{


        return -1;

    }


 return 0;
}








int addLibro(eLibros* Libros ,char szTitulo[],int nCodigoAutor,int nCant){

    int nIndexLibre;

    nIndexLibre = buscarLibreLibros(Libros, nCant);


    if(nIndexLibre != -1){

        Libros[nIndexLibre].nCodigoLibro = nIndexLibre+100;
        strcpy(Libros[nIndexLibre].szTitulo, szTitulo);
        Libros[nIndexLibre].isEmpty = 0;

    }else{


        return -1;

    }


 return 0;
}






int addSocio(eSocios* Socios, char szApellido[],char szNombre[],char cSexo,char szTelefono[], char szEMail[],eFecha Fecha,int nCant){

    int nIndexLibre;

    nIndexLibre = buscarLibreSocios(Socios, nCant);


    if(nIndexLibre != -1){

        Socios[nIndexLibre].nCodigoSocio = nIndexLibre+100;
        strcpy(Socios[nIndexLibre].szNombre, szNombre);
        strcpy(Socios[nIndexLibre].szApellido, szApellido);
        strcpy(Socios[nIndexLibre].szTelefono, szTelefono);
        strcpy(Socios[nIndexLibre].szEMail, szEMail);
        Socios[nIndexLibre].cSexo = cSexo;
        Socios[nIndexLibre].FechaAsocioado = Fecha;
        Socios[nIndexLibre].isEmpty = 0;

    }else{


        return -1;

    }


 return 0;
}







int addPrestamo(ePrestamos* Prestamos, int nCodigoLibro,int nCodigoSocio,eFecha FechaPrestamo,int nCant){

    int nIndexLibre;

    nIndexLibre = buscarLibrePrestamos(Prestamos, nCant);


    if(nIndexLibre != -1){

        Prestamos[nIndexLibre].nCodigoPrestamo = nIndexLibre+100;
        Prestamos[nIndexLibre].nCodigoLibro = nCodigoLibro;
        Prestamos[nIndexLibre].nCodigoSocio = nCodigoSocio;
        Prestamos[nIndexLibre].FechaPrestamo = FechaPrestamo;
        Prestamos[nIndexLibre].isEmpty = 0;

    }else{


        return -1;

    }


 return 0;
}



int findAutorById(eAutores* Autores, int nIdAutor,int nCant){

    int nIndexEmpleado=-1,i;


        for(i=0;i<nCant;i++){

            if(Autores[i].nCodigo == nIdAutor){



                nIndexEmpleado = i;
                break;
            }


        }


    return nIndexEmpleado;
}





/*
int findAutorById(eAutores* Autores, int nIdAutor,int nCant){

    int nIndexEmpleado=-1,i;


        for(i=0;i<nCant;i++){

            if(Autores[i].nCodigo == nIdAutor){



                nIndexEmpleado = i;
                break;
            }


        }


    return nIndexEmpleado;
}*/





int findLibroById(eLibros* Libros, int nIdLibro,int nCant){

    int nIndexEmpleado=-1,i;


        for(i=0;i<nCant;i++){

            if(Libros[i].nCodigoLibro == nIdLibro){



                nIndexEmpleado = i;
                break;
            }


        }


    return nIndexEmpleado;
}

int findSocioById(eSocios* Socios, int nIdSocio,int nCant){

    int nIndexEmpleado=-1,i;


        for(i=0;i<nCant;i++){

            if(Socios[i].nCodigoSocio == nIdSocio){



                nIndexEmpleado = i;
                break;
            }


        }


    return nIndexEmpleado;
}






int findPrestamoById(ePrestamos* Prestamos, int nIdPrestamo,int nCant){

    int nIndexEmpleado=-1,i;


        for(i=0;i<nCant;i++){

            if(Prestamos[i].nCodigoPrestamo == nIdPrestamo){



                nIndexEmpleado = i;
                break;
            }


        }


    return nIndexEmpleado;
}



int removeAutor(eAutores* Autores, int nIdAutor, int nCant){

    int i;


    for(i=0;i<nCant;i++){

        if(Autores[i].nCodigo == nIdAutor && Autores[i].isEmpty == 0){

            Autores[i].isEmpty = 1;
            return 0;
        }
    }


 return -1;
}


int removeLibro(eLibros* Libros, int nIdLibro, int nCant){

    int i;


    for(i=0;i<nCant;i++){

        if(Libros[i].nCodigoLibro == nIdLibro && Libros[i].isEmpty == 0){

            Libros[i].isEmpty = 1;
            return 0;
        }
    }


 return -1;
}


int removeSocio(eSocios* Socios, int nIdSocio, int nCant){

    int i;


    for(i=0;i<nCant;i++){

        if(Socios[i].nCodigoSocio == nIdSocio && Socios[i].isEmpty == 0){

            Socios[i].isEmpty = 1;
            return 0;
        }
    }


 return -1;
}








/** \brief Da de alta un empleado en el array
 *
 * \param eEmpleado Employee
 * \param nCantidad int
 * \return
 *
 */
void DarAltaSocio(eSocios* Socio,int nCant){

    char szNombre[100],szApellido[100],szTelefono[100],szMail[100];
    int nAuxInt;
    char cSexo;
    eFecha AuxFecha;
    int AgregarSocio;


    printf("Ingresar Nombre del Socio: ");
    fflush(stdin);
    scanf("%s",&szNombre);

    while(ValidarString(szNombre,31)!=0){

        printf("Reingrese Nombre del Socio: ");
        fflush(stdin);
        scanf("%s",&szNombre);
    }
    printf("Ingresar Apellido del Socio: ");
    fflush(stdin);
    scanf("%s",&szApellido);

    while(ValidarString(szApellido,31)!=0){

        printf("Reingrese Apellido del Socio: ");
        fflush(stdin);
        scanf("%s",&szApellido);
    }


    printf("Ingresar Telefono del Socio: ");
    fflush(stdin);
    scanf("%s",&szTelefono);

    while(ValidarString(szTelefono,16)!=0){

        printf("Reingrese Telefono del Socio: ");
        fflush(stdin);
        scanf("%s",&szTelefono);
    }

    printf("Ingresar eMail del Socio: ");
    fflush(stdin);
    scanf("%s",&szMail);

    while(ValidarString(szApellido,31)!=0){

        printf("Reingrese eMail del Socio: ");
        fflush(stdin);
        scanf("%s",&szMail);
    }

    printf("Ingresar Sexo del Socio: ");
    fflush(stdin);
    scanf("%c",&cSexo);
    cSexo=tolower(cSexo);

    while(ValidarCharacter(cSexo,'f','m')!=0){

        printf("Reingrese Sexo del Socio: ");
        fflush(stdin);
        scanf("%c", &cSexo);
    }

    printf("Ingresar Dia de Asociado: ");
    fflush(stdin);
    scanf("%d", &AuxFecha.nDia);

    while(ValidarEnteroRango(AuxFecha.nDia,31,1)!=0){

        printf("Reingrese Dia del Asociado: ");
        fflush(stdin);
        scanf("%d", &AuxFecha.nDia);
    }

    printf("Ingresar Mes de Asociado: ");
    fflush(stdin);
    scanf("%d", &AuxFecha.nMes);

    while(ValidarEnteroRango(AuxFecha.nMes,12,1)!=0){

        printf("Reingrese mes del Asociado: ");
        fflush(stdin);
        scanf("%d", &AuxFecha.nMes);
    }


    printf("Ingresar Anio de Asociado: ");
    fflush(stdin);
    scanf("%d", &AuxFecha.nAnio);

    while(ValidarEnteroRango(AuxFecha.nAnio,2019,2000)!=0){

        printf("Reingrese Anio del Asociado: ");
        fflush(stdin);
        scanf("%d", &AuxFecha.nAnio);
    }

   AgregarSocio = addSocio(Socio,szApellido,szNombre,cSexo,szTelefono,szMail,AuxFecha, nCant);

   if(AgregarSocio != 0){
    printf("OCURRIO UN ERROR AL CARGAR EMPLEADO!");
   }

}





void ModificarSocio(eSocios* Socio, int nCantidad){

    int ReturnModificar=-1,nAuxiliar,nOpcion,nAuxInt;
    char Seguir='s',cVerificar, szApellido[70],szNombre[70],szTelefono[70],cSexo,szEMail[70];
    float fAuxFloat;


    printf("Ingrese ID para modificar: ");
    scanf("%d", &nAuxiliar);

    nAuxiliar=findSocioById(Socio,nCantidad,nAuxiliar);

    if(nAuxiliar==-1){

        printf("No se encontro la ID buscada");

    }else{

        do{
        printf("1.Modificar Nombre\n2.Modificar Apellido\n3.Modificar Sexo\n4.Modificar Telefono\n5.Modificar eMail\n6.Volver al Menu principal");
        scanf("%d", &nOpcion);
        while(ValidarEnteroRango(nOpcion,1,6)!=0){
            printf("Ingresar Opcion Correcta: ");
            scanf("%d", &nOpcion);
        }

        switch(nOpcion){

            case 1: printf("Ingresar Nombre del socio: ");
                    fflush(stdin);
                    scanf("%s",&szNombre);

                    while(ValidarString(szNombre,31)!=0){

                        printf("Reingrese Nombre del Socio: ");
                        fflush(stdin);
                        scanf("%s",&szNombre);
                    }
                    strcpy(Socio[nAuxiliar].szNombre,szNombre);
                    break;


            case 2:    printf("Ingresar Apellido del Socio: ");
                       fflush(stdin);
                    scanf("%s",&szApellido);

                        while(ValidarString(szApellido,31)!=0){

                            printf("Reingrese Apellido del empleado: ");
                            fflush(stdin);
                            scanf("%s",&szApellido);
                            }
                            strcpy(Socio[nAuxiliar].szApellido,szApellido);
                        break;


            case 3:     printf("Ingrese Telefono: ");
                        fflush(stdin);
                        scanf("%s",&szTelefono);

                        while(ValidarString(szTelefono,16)!=0){

                            printf("Reingrese telefono del socio: ");
                            fflush(stdin);
                            scanf("%s",&szTelefono);
                            }
                        strcpy(Socio[nAuxiliar].szTelefono,szTelefono);
                        break;

            case 4:      printf("Ingrese sexo del empleado: ");
                        fflush(stdin);
                        scanf("%c", &cSexo);

                        while(ValidarCharacter(cSexo,'f','m')!=0){

                            printf("Reingrese el sexo: ");
                            fflush(stdin);
                            scanf("%c",&cSexo);
                            }
                            Socio[nAuxiliar].cSexo = cSexo;
                    break;


            case 5:     printf("Ingrese eMail: ");
                        fflush(stdin);
                        scanf("%s",&szEMail);

                        while(ValidarString(szEMail,31)!=0){

                            printf("Reingrese eMail del socio: ");
                            fflush(stdin);
                            scanf("%s",&szEMail);
                            }
                        strcpy(Socio[nAuxiliar].szEMail,szEMail);
                        break;
                    break;

            case 6:
                    Seguir='n';
                    break;


        }
        }while(Seguir=='s');
    }

}


void BajaSocios(eSocios* Socio, int nCant){

    int auxId,auxInt;


    printf("Ingrese ID a buscar: ");
    scanf("%d", &auxId);

    auxInt=findSocioById(Socio,auxId,nCant);

    if(auxInt==-1){
        printf("No se encontro la ID buscada");
    }else{

        removeSocio(Socio,auxInt,nCant);
        printf("Socio dado de baja");
    }

}
