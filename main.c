#include <stdio.h>
#include <stdlib.h>

int main()
{

int vector[5];

for(int i=0;i<5;i++)
{
    printf("Ingrese un numero: ");
    scanf("%d",&vector[i]);

}

for(int i=0;i<5;i++)
{
    printf("los numeros ingresados en orden son: %d\n",vector[i]);

}

//printf("los numeros ingresados son: %d %d %d %d %d",vector[0],vector[1],vector[2],vector[3],vector[4]);





    return 0;
}
