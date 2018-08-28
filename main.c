#include <stdio.h>
#include <stdlib.h>

/*
1-Suma de los negativos.
2-Suma de los positivos.
3-Cantidad de positivos.
4-Cantidad de negativos.
5-Cantidad de ceros.
6-Cantidad de números pares.
7-Promedio de positivos.
8-Promedios de negativos.
9-Diferencia entre positivos y negativos, (positvos-negativos).
10-maximo y minimo.
funcion fflush = barre la basura del buffer del teclado.
fflush(stdin); scanf("%c",&respuesta);
getch
getchar

*/
int main()
{

    int numero;
    float sumadelospositivos=0;
    float sumadelosnegativos=0;
    int cantidaddepositivos=0;
    int cantidaddenegativos=0;
    int cantidaddeceros=0;
    int cantidaddenumerospares=0;
    float promediodepositivos;
    float promediodenegativos;
    int diferenciaentrepositivosynegativos;
    int maximo=0;
    int minimo=0;
    char respuesta='s';
    int bandera=0;

//estructura do while ( nueva ) nos aseguramos que se ingrese por lo menos una vez
    do
    {

        printf("Ingrese un numero: \n");
        scanf("%d",&numero);

        if(numero>0)
        {
            sumadelospositivos=sumadelospositivos+numero;
            cantidaddepositivos=cantidaddepositivos+1;
        }
        else if(numero<0)
        {
            sumadelosnegativos=sumadelosnegativos+numero;
            cantidaddenegativos=cantidaddenegativos+1;
        }
        else
        {
            cantidaddeceros=cantidaddeceros+1;
        }

        if(numero%2==0)
        {
            cantidaddenumerospares=cantidaddenumerospares+1;
        }

        if(bandera=0)
        {
            maximo=numero;
            minimo=numero;
            bandera=1;
        }

        if(numero>maximo)
        {
            maximo=numero;

        }
        if(numero<minimo)
        {
            minimo=numero;

        }



        printf("Desea continuar?  n=no \n");
        fflush(stdin); // se utiliza para q limpie el bufer del teclado, sino no funciona
        scanf("%c",&respuesta);
    }
    while(respuesta=='s');


    promediodepositivos= (float) (sumadelospositivos/cantidaddepositivos);
    promediodenegativos= (float) (sumadelosnegativos/cantidaddenegativos);
    diferenciaentrepositivosynegativos=cantidaddepositivos-cantidaddenegativos;


    printf("La suma de los positivos es: %.2f \n",sumadelospositivos);
    printf("La cantidad de ceros es: %d \n",cantidaddeceros);
    printf("La suma de los negativos es: %.2f \n",sumadelosnegativos);
    printf("La cantidad de positivos es: %d \n",cantidaddepositivos);
    printf("La cantidad de negativos es: %d \n",cantidaddenegativos);
    printf("La cantidad de numeros pares es: %d \n",cantidaddenumerospares);
    printf("El promedio de los positivos es: %f \n",promediodepositivos);
    printf("El promedio de los negativos es: %f \n",promediodenegativos);
    printf("La diferencia entre positivos y negativos es de: %d \n",diferenciaentrepositivosynegativos);
    printf("El numero maximo es: %d y el minimo es %d \n",maximo,minimo);


    return 0;

}
