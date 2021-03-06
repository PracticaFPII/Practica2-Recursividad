#include <stdio.h>

/* Incluimos el fichero de las cabezeras de los procedimientos */
#include "../include/headers.h"


/** FACTORIAL **/
void factorial()
{
    unsigned long long resultado, num; // Definimos las variables

    do{  // No existe el factorial de numeros negativos
        printf (" Escribe el numero a factorizar (tiene que ser mayor o igual que 0): ");
        scanf("%llu", &num);
        if(num >= 21){printf("\n El numero introducido produce overflow, repitelo con un numero entre 0 y 20\n\n");}
    } while (num >= 21); // Se supera el limite del rango 2^64-1

    resultado = factorial_rec(num);
    printf(" El factorial de %llu es: %llu\n", num, resultado);
}

unsigned long long factorial_rec(unsigned long long n) // calculamos el factorial de manera recursiva
{
    return n > 1? n * factorial_rec(n-1) : n;
}


/** FIBONACCI **/
void fibonacci()
{
    unsigned long long resultado, num; // Definimos las variables

    do{ // No es posible calcular un numero negativo de la secuencia de fibonacci
        printf (" Escribe el numero a calcular de fibonacci (tiene que ser mayor o igual que 0): ");
        scanf("%llu", &num);
        if(num >= 94){printf("\n El numero introducido produce overflow, repitelo con un numero entre 0 y 93\n\n");}
    } while (num >= 94); // Se supera el limite del rango 2^64-1


    resultado = fibonacci_rec(num);
    printf(" El numero de la secuencia de fibonacci de %llu es: %llu\n", num, resultado);
}

unsigned long long fibonacci_rec(unsigned long long n) // calculamos fibonacci de manera recursiva
{
    static unsigned long long tabla[94]; //A partir del numero 94 hay overflow, la tabla se inicializa a 0
    unsigned long long resultado;

    // Usamos una tabla para guardar los distintos fibonacci para evitar repeticiones
    if (tabla[n] != 0){
        resultado = tabla[n]; // Extraemos el resultado de la tabla auxiliar
    }
    else{
        resultado = n > 1?  fibonacci_rec(n-1) + fibonacci_rec(n-2): n; // Calculamos fibonacci
        tabla[n] = resultado; // Actualizamos la tabla auxiliar
    }
    return resultado;
}