#include <stdio.h> 
#include <stdbool.h> 

/* Incluimos el fichero de las cabezeras de los procedimientos */
#include "../include/headers.h"

#define MAX_TABLA 100

/** BUSQUEDA DICOTOMICA **/
void busqueda_dicotomica()
{
    bool tabla_cargada;
    int columnas, num_buscado, posicion, tabla[MAX_TABLA];

    tabla_cargada = cargar_fichero(tabla, &columnas);

    if (tabla_cargada){
        printf(" La tabla tiene %d elementos\n");
        printf(" Introduzca el numero a buscar:");
        scanf("%d", &num_buscado);

        busqueda_rec(num_buscado, tabla, &posicion);
    
        //...
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

int busqueda_rec(int num_buscado, int *posicion)
{

}
