/********************************************************************************
*                        PRACTICA 2 - CALCULADORA                               *
* POR CRISTIAN FERNANDEZ LOPEZ, DANIEL CLAVERO LAHERA, MASSIN LAAOUAJ MADROUNI  *
*                                    FPII                                       *
********************************************************************************/

#include <stdio.h> 
#include <stdbool.h> 

/* Incluimos el fichero de las cabezeras de los procedimientos */
#include "include/headers.h"


/** Programa principal **/
int main() 
{
	/* Declaracion de variables */
	int opcion = 0;
	bool salir = false; /* Booleano para salir del programa principal, y repetir el menu */

	/* Bucle del Menu y los procedimientos */
	while (!salir)
	{
		/* Menú principal */
		do
		{
			printf("\n MENU:\n");
			printf(" [1] - Factorial\n");
            printf(" [2] - Fibonacci\n");
            printf(" [3] - Maximo Comun Divisor\n");
            printf(" [4] - Movimientos Torres de Hanoi\n");
            printf(" [5] - Busqueda Dicotomica\n");
            printf(" [6] - Suma digital\n");
            printf(" [7] - Raiz digital\n");
			printf(" [0] - Salir\n\n");

			printf (" Escribe tu eleccion (el numero entre corchetes): ");
			scanf("%d", &opcion);
			printf("\n ------------------------------------\n\n");
		} while (opcion < 0 || opcion > 7);
		
        /* Realizamos las opciones */
		switch (opcion)
		{	
			case 0: /** SALIR **/
                salir = true;
				printf(" Gracias por utilizar el programa");
				printf("\n ------------------------------------\n");
				break;
				
			
			case 1: /** Factorial **/
                factorial();
                printf("\n ------------------------------------\n");
				break;
			
			case 2: /** Fibonacci **/
                fibonacci();
                printf("\n ------------------------------------\n");
				break;
			
			case 3: /** Maximo Comun Divisor **/
				mcd();
                printf("\n ------------------------------------\n");
				break;
			
			case 4: /** Movimientos Torres de Hanoi **/
				torres_hanoi();
                printf("\n ------------------------------------\n");
				break;
			
			case 5: /** Busqueda Dicotomica **/
				// busq_dicotomica();
                printf("\n ------------------------------------\n");
				break;

			case 6: /** Suma digital **/
				suma_digital();
                printf("\n ------------------------------------\n");
				break;
			
			case 7: /** Raiz digital **/
				raiz_digital();
                printf("\n ------------------------------------\n");
				break;
		}
	}
	return 0; 
} 