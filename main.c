#include <stdio.h>
#include <stdlib.h>

int main()
{

int vector[5]={0,0,0,0,0};
char respuesta='s';
int numero;
int indice;

do
{

    printf("Ingrese un numero: ");
    scanf("%d",&numero);

    printf("Ingrese el indice: ");
    scanf("%d",&indice);

    printf("desea continuar?");
    scanf("%c",&respuesta);
    fflush(stdin);

    vector[indice]=numero;



}while(respuesta!='n');

for(int i=0;i<5;i++) // que algo se repita 5 veces
{
    printf("\nlos numeros ingresados en orden son: %d\n",vector[i]);

}

    return 0;
}
