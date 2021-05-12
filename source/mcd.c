#include <stdio.h> 
#include <stdbool.h> 

/* Incluimos el fichero de las cabezeras de los procedimientos */
#include "include/headers.h"

/** MAXIMO COMUN DIVISOR **/
void mcd()
{
    int num1, num2, resultado;

    printf(" Introduce el numero 1: ");
    scanf("%d", &num1);
    printf(" Introduce el numero 2: ");
    scanf("%d", &num2);

    resultado = (num1 >= num2)? factorial_rec(num1, num2):factorial_rec(num2, num1);

}

int mcd_rec(int n1, int n2) // calculamos el mcd de manera recursiva aplicando el algoritmo de euclides
{
    return (n1%n2 == 0)? n2: mcd_rec(n2, n1%n2);
}
