//implementaciones

#include "input.h"
#include <string.h>
#include <stdio.h>



/*
int sortEmployees(Employee* eEmpleado, int nCant, int nOrder){

    Employee eEmpleadoAuxiliar;
     int   i,j;

    if(nOrder == 1){

        for(i=0;i<nCant-1;i++){


            for(j=i+1;j<nCant;j++){


                if(strcmp(eEmpleado[i].lastName,eEmpleado[j].lastName) <= 0 && eEmpleado[i].sector <= eEmpleado[j].sector ){

                    eEmpleadoAuxiliar=eEmpleado[i];
                    eEmpleado[i]=eEmpleado[j];
                    eEmpleado[j]=eEmpleadoAuxiliar;

                    return 0;
                }

            }
        }


    }else if (nOrder == 0){

        for(i=0;i<nCant-1;i++){


            for(j=i+1;j<nCant;j++){


                if(strcmp(eEmpleado[i].lastName,eEmpleado[j].lastName) >= 0 && eEmpleado[i].sector <= eEmpleado[j].sector ){

                    eEmpleadoAuxiliar=eEmpleado[i];
                    eEmpleado[i]=eEmpleado[j];
                    eEmpleado[j]=eEmpleadoAuxiliar;

                    return 0;
                }

            }
        }



    }


 return -1;
}


int printEmployees(Employee* eEmpleados, int nCantidad)
{

    int i;


    for (i=0;i<nCantidad;i++){



        if  (eEmpleados[i].isEmpty == 0){


            printf("%d %s,%s\n$%.2f Sector: %d\n\n\n", eEmpleados[i].id,eEmpleados[i].lastName,eEmpleados[i].name,eEmpleados[i].salary,eEmpleados[i].sector);

        }

    }


 return 0;
}*/


/** \brief valida una cadena de caracteres
 *
 * \param string Char*
 * \param nCantidadMaxima int
 * \return si devuelve -1 La cadena no es valida (se exede de caracteres permitidos) si no, 0 todo ok
 *
 */

int ValidarString(char string[],int nCantMaxima){

    int returnValidar =-1,Contador;


    Contador=strlen(string);

    if(Contador<nCantMaxima){

        returnValidar=0;
    }

    return returnValidar;
}


/** \brief Validar un rango de numeros enteros
 *
 * \param nNumero int
 * \param nMax int
 * \param nMin int
 * \return si devuelve -1 el numero esta fuera de rango si devuelve 0 ok
 *
 */
int ValidarRangoEntero(int nNumero, int nMax, int nMin){

    int ReturnValidarRango=-1;


    if(nNumero>=nMin && nNumero<=nMax){


        ReturnValidarRango = 0;
    }

    return ReturnValidarRango;
}

/** \brief Validar un numero float
 *
 * \param fFloat float
 * \return si devuelve -1 el numero es negativo 0 ok
 *
 */
int ValidarFloatPositivo(float fFloat){

    int ReturnFloatPositivo=-1;

    if(fFloat>0){

        ReturnFloatPositivo=0;
    }


    return ReturnFloatPositivo;
}






/** \brief Valida un caracter, si es una opcion o la otra
 *
 * \param cChar char
 * \param cOpcionUno char
  * \param cOpcionDos char
 * \return -1 si es error, 0 si Ok
 */
int ValidarCharacter(char cChar, char cOpcionUno, char cOpcionDos){

    int ReturnChar=-1;


    if(cChar == cOpcionUno ||cChar == cOpcionDos){

        ReturnChar = 0;
    }


    return ReturnChar;
}


