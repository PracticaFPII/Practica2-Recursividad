#include <stdio.h> 
#include <stdbool.h> 

/* Incluimos el fichero de las cabezeras de los procedimientos */
#include "include/headers.h"


/** FACTORIAL **/
void factorial()
{
    unsigned long int resultado, num; // Definimos las variables

    do{  // No existe el factorial de numeros negativos
        printf (" Escribe el numero a factorizar (tiene que ser mayor que 0): ");
        scanf("%d", &num);
    } while (num < 0);

    resultado = factorial_rec(num);  
    printf(" El factorial de %d es: %d\n", num, resultado);
}

unsigned long int factorial_rec(unsigned long int n) // calculamos el factorial de manera recursiva
{
    return n > 1? n * factorial_rec(n-1) : n;
}


/** FIBONACCI **/
void fibonacci()
{
    unsigned long int resultado, num; // Definimos las variables

    do{ // No es posible calcular un numero negativo de la secuencia de fibonacci 
        printf (" Escribe el numero a calcular de fibonacci (tiene que ser mayor que 0): ");
        scanf("%d", &num);
    } while (num < 0);
    
    
    resultado = fibonacci_rec(num);  
    printf(" El numero de la secuencia de fibonacci de %d es: %d\n", num, resultado);
}

unsigned long int fibonacci_rec(unsigned long int n) // calculamos fibonacci de manera recursiva
{
    return n > 1?  fibonacci_rec(n-1) + fibonacci_rec(n-2): n;
}
