#include <stdio.h> 
#include <stdbool.h> 

/* Incluimos el fichero de las cabezeras de los procedimientos */
#include "../include/headers.h"


/** TORRES DE HANOI **/
void torres_hanoi()
{
    int num;

    do {
        printf (" Escribe el numero de discos con los que quieres jugar (entre 3 y 10): ");
        scanf("%d", &num);
    } while (num<3 || num>10);

    mover_fichas(num, 1, 2, 3);
}

/** MOVER FICHAS: Función para mover las fichas de A a C **/
void mover_fichas (int num, int a, int b, int c) {

    /*
    1. Columna a: Este es el pilar donde se ubican todos los discos al comienzo del juego.
    2. Columna b: Columna auxiliar utilizada en el proceso de transferencia.
    3. Columna c: La barra objetivo final de la transferencia.
    */
    
    if (num >= 1) { // Comprobamos si no hay más discos, para indicar el final del juego.
        mover_fichas(num-1, a, c, b); // Mueve el disco general de A a la barra de destino (en este caso la columna de destino es B)

        printf(" Mover el disco %d de la columna %d a la columna %d\n", num-1, a, b);

        mover_fichas(num-1, c, b, a); // Mueve todo el disco de B a C con la columna auxiliar A
    }
}