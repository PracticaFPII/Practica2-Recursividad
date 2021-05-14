#include <stdio.h> 

/* Incluimos el fichero de las cabezeras de los procedimientos */
#include "../include/headers.h"

/** MAXIMO COMUN DIVISOR **/
void mcd()
{
    int num1, num2, resultado;

    /* Pedimos numeros para calcular el maximo comun divisor*/
    printf(" Introduce el numero 1: ");
    scanf("%d", &num1);
    printf(" Introduce el numero 2: ");
    scanf("%d", &num2);
    

    /* Calculamos el mcd */
    if (num1==0 || num2==0){ // Si hay un numero 0 el mcd es el otro, el de 0 y 0 es 0
        resultado = num1==0?  num2 : num1; // El resultado es el numero que no sea 0
    }
    else{
        resultado = (num1 >= num2)? mcd_rec(num1, num2) : mcd_rec(num2, num1); // Colocamos en la primera posicion el mayor y en la segunda el menor
    }
    

    /* Se imprime el resultado */
    printf(" El maximo comun divisor de %d y %d es: %d\n", num1, num2, resultado);
}

int mcd_rec(int n1, int n2)  // Calculamos el mcd de manera recursiva aplicando el algoritmo de euclides
{
    return (n1%n2 == 0)? n2 : mcd_rec(n2, n1%n2); //Dividimos y si el resto es 0 el divisor es el mcd, si no, tomamos el cociente como denominador del divisor y repetimos
}
