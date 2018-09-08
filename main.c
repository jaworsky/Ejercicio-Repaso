#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define TAM 6

void mostrarVector( int x[], int tam);

int main()
{
int vector[TAM]={0}; // con poner un solo cero, ya inicializa los demas.
char respuesta='s';
int numero;
int indice;

do
{
    printf("Ingrese un numero: ");
    scanf("%d",&numero);
    printf("Ingrese el indice: ");
    scanf("%d",&indice);
    while(indice<0 || indice>=TAM) // valido el indice del vector
    {
        printf("Ingrese un indice dentro del tamanio del vector: ");
        scanf("%d",&indice);
    }


    printf("desea continuar?");
    scanf("%c",&respuesta);
    fflush(stdin);
    vector[indice]=numero;

}while(respuesta!='n');

mostrarVector(vector, TAM);

    return 0;
}

void mostrarVector( int x[], int tam)
{
    for(int i=0; i < tam; i++)
    {
        printf(" %d", x[i]);
    }
    printf("\n\n");
}

