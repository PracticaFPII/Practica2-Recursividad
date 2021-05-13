#include <stdio.h> 
#include <stdbool.h> 

/* Incluimos el fichero de las cabezeras de los procedimientos */
#include "../include/headers.h"

#define MAX_TABLA 100
#define NOM_FICHERO "tabla_dicotomica.txt"

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

        busqueda_rec(num_buscado, tabla, columnas, &posicion);
    
        //...
    }
    else{
        printf(" El fichero a cargar no existe o esta vacio\n");
    }
}

bool cargar_fichero(int tabla[], int *columnas)
{
    bool cargado = false;
    int i = 0;
    FILE *fichero;

    fichero = fopen(NOM_FICHERO, "r"); // Lo abrimos en formato de lectura para cargar los datos en una tabla
    if (fichero != NULL){
        cargado = true;

        fscanf(fichero, "%d", tabla[i]);
        while (!feof(fichero)){
            i++;
            fscanf(fichero, "%d", tabla[i]);
        }
        *columnas = i;
    }

    return cargado;
}

int busqueda_rec(int num_buscado, int tabla[], int *posicion)
{
    return ;
}
