#include <stdio.h> 

/* Incluimos el fichero de las cabezeras de los procedimientos */
#include "../include/headers.h"


/** FACTORIAL **/
void factorial()
{
    unsigned long long resultado, num; // Definimos las variables

    do{  // No existe el factorial de numeros negativos
        printf (" Escribe el numero a factorizar (tiene que ser mayor o igual que 0): ");
        scanf("%I64u", &num);
    } while (num < 0);

    resultado = factorial_rec(num);
    printf(" El factorial de %I64u es: %I64u\n", num, resultado);
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
        scanf("%I64u", &num);
    } while (num < 0);


    resultado = fibonacci_rec(num);
    printf(" El numero de la secuencia de fibonacci de %I64u es: %I64u\n", num, resultado);
    if (num>=94){printf(" Advertencia: El valor no es correcto, ha habido overflow\n");} // Se supera el limite del rango 2^64-1
}

unsigned long long fibonacci_rec(unsigned long long n) // calculamos fibonacci de manera recursiva
{
    static unsigned long long tabla[94]; //A partir del numero 94 hay overflow
    unsigned long long resultado;

    if (tabla[n] != 0){
        resultado = tabla[n];
    }
    else{
        resultado = n > 1?  fibonacci_rec(n-1) + fibonacci_rec(n-2): n;
        tabla[n] = resultado;
    }
    return resultado;
}