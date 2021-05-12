#include <stdio.h> 

/* Incluimos el fichero de las cabezeras de los procedimientos */
#include "include/headers.h"


/** SUMA DIGITAL **/ // (67891) = 6 + 7 + 8 + 9 + 1 = 31
void suma_digital()
{
    int num, resultado;

    printf (" Escribe el numero del que quieres hacer la suma: ");
    scanf("%d", &num);

    resultado = suma_rec(num);
}

int suma_rec(int n)
{
    return ;
}

/** RAIZ DIGITAL **/
void raiz_digital()
{
    int num, resultado;

    printf (" Escribe el numero del que quieres hacer la raiz");
    scanf("%d", &num);

    resultado = raiz_rec(num);
}

int raiz_rec(int n)
{
    return ;
}
