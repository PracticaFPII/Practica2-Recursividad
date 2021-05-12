/********************************************************************************
*                        PRACTICA 2 - RECURSIVIDAD                              *
* POR CRISTIAN FERNANDEZ LOPEZ, DANIEL CLAVERO LAHERA, MASSIN LAAOUAJ MADROUNI  *
*                                    FPII                                       *
********************************************************************************/

#include <stdio.h> 
#include <stdbool.h> 

/** FUNCIONES **/
void factorial();   // FACTORIAL
unsigned long int factorial_rec(unsigned long int n);


void fibonacci();   // FIBONACCI
unsigned long int fibonacci_rec(unsigned long int n);


void mcd();         // MAXIMO COMUN DIVISOR
int mcd_rec(int num1, int num2);


/*
void torres_hanoi();    // TORRES DE HANOI
int torres_rec();
void mov_torres();
*/


void busqueda_dicotomica(); // BUSQUEDA DICOTOMICA
bool cargar_fichero();
int busqueda_rec(int n_buscar, int *posicion);


void suma_digital();    // SUMA DIGITAL
int suma_rec(int n);


void raiz_digital();    // RAIZ DIGITAL
int raiz_rec(int n);

