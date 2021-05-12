#include <stdio.h> 
#include <stdbool.h> 

/* Incluimos el fichero de las cabezeras de los procedimientos */
#include "include/headers.h"


/** BUSQUEDA DICOTOMICA **/
void busqueda_dicotomica()
{
    bool tabla_cargada;

    tabla_cargada = cargar_fichero();

    if (tabla_cargada){
        printf(" La tabla tiene %d elementos\n");
        printf(" Introduzca el numero a buscar:");
        //....
    }
    else{
        printf(" El fichero a cargar no existe o esta vacio\n");
    }
}

bool cargar_fichero()
{
    bool cargado = false;

    //....

    return cargado;
}
