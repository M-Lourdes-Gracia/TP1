/*
 * calculadora.c
 *
 *  Created on: 17 abr. 2021
 *  Author      : Lourdes Gracia
 */

#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"



int suma (int numero1, int numero2)
{
	int retornoSuma = 0;

	retornoSuma = numero1+numero2;

	return printf("El resultado de la suma es : %d", retornoSuma);
}
int resta (int numero1, int numero2)
{
	int retornoResta = 0;

	retornoResta = numero1-numero2;

	return printf("El resultado de la resta es : %d", retornoResta);
}
int multiplicacion (int numero1, int numero2)
{
	int retornoMultip = 0;

	retornoMultip = numero1 * numero2;

	return printf("El resultado de la suma es : %d", retornoMultip);
}
float division (int numero1, int numero2)
{
	float retornoDiv = 0;

	retornoDiv = numero1 / numero2;
	if (numero1 == 0)
	{
		printf("No es posible dividir por cero");
	}
	else
	{
		return printf("El resultado de la division es : %f", retornoDiv);
	}
}
float factorial (int numero1, int numero2)
{
    int factoreo1;
    int factoreo2;
    int i;


    for (i=1;i<numero1; i++)
    factoreo1 = factoreo1 * i;

    for (i=1;i<numero2; i++)
    factoreo2 = factoreo2 * i;
    return printf("El resultado del factoreo es : %d", factoreo1);
    return printf("El resultado del factoreo es : %d", factoreo2);
}



