#include <stdio.h> 

/* Incluimos el fichero de las cabezeras de los procedimientos */
#include "include/headers.h"


/** SUMA DIGITAL **/ // (67891) = 6 + 7 + 8 + 9 + 1 = 31
void suma_digital()
{
    int num, resultado;

    printf(" Escribe el numero del que quieres hacer la suma: ");
    scanf("%d", &num);

    resultado = suma_rec(num);

    printf(" La suma digital de %d es: %d", num, resultado);
}

int suma_rec(int n)
{
    return n >= 10? n%10 + suma_rec(n/10): n;
}


/** RAIZ DIGITAL **/ // (67891) = 6 + 7 + 8 + 9 + 1 = 31 -> 3 + 1 = 4 (2x Suma Digital)
void raiz_digital()
{
    int num, resultado;

    printf(" Escribe el numero del que quieres hacer la raiz");
    scanf("%d", &num);

    /* Para la raiz digital aplicamos 2 veces la suma digital*/
    resultado = suma_rec(num);
    resultado = suma_rec(resultado);

    printf(" La raiz digital de %d es: %d", num, resultado);
}

int raiz_rec(int n)
{
    return /*...*/;
}
