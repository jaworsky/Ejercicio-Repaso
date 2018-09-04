#include <stdio.h>
#include <stdlib.h>
#include "validaredad.h"


int main()
{

char mensaje1[30]="ingrese la edad";
char mensaje2[30]="Reingrese la edad";
int limitesuperior=100;
int limiteinferior=0;
int edadvalidada;

edadvalidada=getInt(mensaje1,mensaje2,limitesuperior,limiteinferior);

printf(" la edad validada es: %d \n",edadvalidada);

    return 0;
}


