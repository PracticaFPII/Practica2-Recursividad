#include <stdio.h> 

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
    
    /* Pasamos a absoluto los numeros */
    num1 = (num1<0)? 0 - num1: num1;
    num2 = (num2<0)? 0 - num2: num2;

    /* Calculamos el mcd */
    resultado = (num1 >= num2)? factorial_rec(num1, num2):factorial_rec(num2, num1); // Colocamos en la primera posicion el mayor y en la segunda el menor

}

int mcd_rec(int n1, int n2)  // calculamos el mcd de manera recursiva aplicando el algoritmo de euclides
{
    return (n1%n2 == 0)? n2: mcd_rec(n2, n1%n2);
}
