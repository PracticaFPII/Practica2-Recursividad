#include <stdio.h> 
#include <stdbool.h>

/* Incluimos el fichero de las cabezeras de los procedimientos */
#include "../include/headers.h"


/** SUMA DIGITAL **/ // (67891) = 6 + 7 + 8 + 9 + 1 = 31
void suma_digital()
{
    int num, resultado, opcion;
    bool neg = false;

    printf(" Escribe el numero del que quieres hacer la suma: ");
    scanf(" %d", &num);
    
    if (num < 0){ // Lo pasamos a absoluto
        num = -num;
        neg = true;
    } 

    do {
        printf(" Desea realizar la suma en recursiva [0] o iterativa [1]: ");
        scanf(" %d", &opcion);
    } while (opcion<0 || opcion>1);

    if (opcion == 0) {
        resultado = suma_rec(num); // Llamada a la función, para realizar la suma Recursiva
    } else {
        resultado = suma_ite(num);  // Llamada a la función, para realizar la suma Iterativa
    }

    if (neg){
        num = -num; // Recuperamos el signo
        resultado = -resultado; // Le damos el valor negativo
    }

    printf(" La suma digital de %d es: %d", num, resultado);
}


/** Funcion Recursiva para realizar la suma y raiz digital **/
int suma_rec(int n)
{
    return n >= 10? n%10 + suma_rec(n/10): n;
}

/** Funcion Iterativa **/
int suma_ite (int n) 
{
    int  suma = 0;

    while (n>0) { // Bucle para calcular la suma de los digitos
         suma += (n%10);

        n /= 10; // Quitar digitos del numero
    }

    return suma;
}

/** RAIZ DIGITAL **/ // (67891) = 6 + 7 + 8 + 9 + 1 = 31 -> 3 + 1 = 4 (2x Suma Digital)
void raiz_digital()
{
    int num, resultado;
    bool neg = false;

    printf(" Escribe el numero del que quieres hacer la raiz: ");
    scanf("%d", &num);

    if (num < 0){ // Lo pasamos a absoluto
        num = -num;
        neg = true;
    } 

    /* Para la raiz digital aplicamos 2 veces la suma digital*/
    resultado = suma_rec(num);
    resultado = suma_rec(resultado);

    if (neg){
        num = -num; // Recuperamos el signo
        resultado = -resultado; // Le damos el valor negativo
    }

    printf("\n La raiz digital de %d es: %d", num, resultado);
}


