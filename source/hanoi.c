#include <stdio.h> 
#include <stdbool.h> 

/* Incluimos el fichero de las cabezeras de los procedimientos */
#include "../include/headers.h"


/** TORRES DE HANOI **/
void torres_hanoi()
{
    int num,n_pos1 = 1,n_pos2 = 2, n_pos3 = 3;

    do {
        printf (" Escribe el numero de discos con los que quieres jugar (entre 3 y 10)");
        scanf("%d", &num);
    } while (num<3 || num>10);

    mover_fichas(num,n_pos1,n_pos2,n_pos3);

    //....
}

void mover_fichas (int num,int n_pos1,int n_pos2, int n_pos3) {
    
    mover_fichas(num-1,n_pos1,n_pos3,n_pos2); //

    // printf(" Mou el disc %d de la vareta %c a la vareta %c");

    mover_fichas(num-1,n_pos3,n_pos2,n_pos1); //
}