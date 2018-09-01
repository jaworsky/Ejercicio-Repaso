#include <stdio.h>
#include <stdlib.h>
#include "math.h" // solo el punto h
#include <string.h>
#include <stdio_ext.h>

/* al archivo.c hay que agregarle las lirberias
*/



int ingresarNumero (float*numero)
{
int retorno=-1;
printf("Ingrese un numero: ");
__fpurge(stdin); // siemrpe antes de pedir un valor
scanf("%f",numero); // no va ampersand &, porque le estoy pasando un puntero

}

