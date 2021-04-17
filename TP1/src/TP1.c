/*
 ============================================================================
 Name        : TP1.c
 Author      : Lourdes Gracia
*/


#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"


int main(void)
{
	setbuf(stdout, NULL);
	int numero1;
	int numero2;
	int resultado;
	int eleccion;


	setbuf(stdout, NULL);
	printf("Ingrese un numero: ");
	scanf("%d", &numero1);

	printf("Ingrese otro numero: ");
	scanf("%d", &numero2);

	printf("\nLos numeros que ingresaste son %d y d%: ", numero1, numero2);

	sumar (numero1, numero2);
	restar (numero1, numero2);
	multiplicacion(numero1, numero2);
	dividir (numero1, numero2);
	factorial (numero1, numero2);
	return 0;
}
