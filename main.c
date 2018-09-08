#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define TAM 6

int buscarNumero(int vec[], int tam, int valor);

void mostrarVector( int x[], int tam);//funcion para mostrar el vector

int buscarMayor(int vec[], int tam);//funcion para buscar el mayor

int main()
{
int vector[TAM]={0}; // con poner un solo cero, ya inicializa los demas.
char respuesta='s';
int numero;
int indice;
int numeromayor;

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

indice =  buscarNumero(vector, TAM, 34);

numeromayor = buscarMayor(vector,TAM);

printf("\nEl numero mayor del vector es: %d\n",numeromayor);

if(indice!=-1)
{
    printf("\n El valor se encuentra en el indice: %d",indice);
}
else
{
    printf("\n El valor buscado, no se encuentra en el indice");
}

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

int buscarNumero(int vec[], int tam, int valor) // funcionando
{
 int indice=-1;

 for(int i=0;i<tam;i++)
 {
     if(vec[i]==valor)
     {
         indice=i;
         break;
     }

 }
    return indice;

}

int buscarMayor(int vec[], int tam)
{

int mayor=vec[0]; // el mayor es el primer indice del vector.

for(int i=1;i<tam;i++)
{
    if(vec[i]>mayor)
    {
        mayor=vec[i];
    }

}

return mayor;

}
