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
        printf(" La tabla tiene %d elementos\n", columnas);
        printf(" Introduzca el numero a buscar: ");
        scanf("%d", &num_buscado);

        posicion = busqueda_rec(num_buscado, tabla, columnas);

        if (posicion >= 100)
        {
            printf("\n No existe el numero %d en la tabla\n", num_buscado);
        }
        else
        {
            printf("\n El numero %d se encuentra en la posicion %d de la tabla (empezando por 0)\n", num_buscado, posicion);
        }
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
    if (fichero != NULL) {
        cargado = true;

        fscanf(fichero, "%d", &tabla[i]);
        while ( !feof(fichero) && i < 99){
            i++;
            fscanf(fichero, "%d", &tabla[i]);
        }
        if (i == 99){printf(" Advertencia: Se han cogido solo los 100 primeros numeros\n");}
        *columnas = i + 1;
    }

    return cargado;
}

int busqueda_rec(int num_buscado, int tabla[], int columnas)
{
    int i = (columnas-1)/2;

    if (num_buscado == tabla[i])
    {
        return i;
    }
    if (columnas > 1)
    {
        if (num_buscado > tabla[i])
        {
            return (i+1) + busqueda_rec(num_buscado, &(tabla[i+1]), i+1);
        }
        else // num_buscado < tabla[i]
        {
            return busqueda_rec(num_buscado, tabla, i+1);
        }
    }
    return 100;
}
