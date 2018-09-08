#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRINGLEN 500

int main()
{
    char miString[STRINGLEN];
    strncpy(miString,"pepe",STRINGLEN); // para guardar algo en una cadena de caracteres
    printf("%s",miString);


    //comparar string
    // si da 0 es porque lo encontro
    int comparacion=strncmp("pepe",miString,STRINGLEN);
    printf("\n%d",comparacion);

return 0;

}
