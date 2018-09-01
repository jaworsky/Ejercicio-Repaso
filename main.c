#include <stdio.h>
#include <stdlib.h>
#include "math.h" // solo el punto h
#include <string.h>
#include <stdio_ext.h>


// instalar linux
// system("clear");
// include <stdio_exth>
// __fpurge(stdin); para limpiar el bufer en linux
//caso 3 calcula todas las operaciones
//caso 4 informa

/*
el punto h tiene el prototipo, firmas
el punto c tiene el desarrollo, las implementaciones
por cada biblioteca 2 archivos uno .c y uno .h
FILE - NEW - EMPTY FILE.  math.c
se guarda dnd esta el main
+
new file empty file math.h
*/

int ingresarNumero (float* numero);

int main()
{



    int flag;
    int opcion;
    int resultadosuma;
    int resultadoresta;


    int menu(int opcion);

    do
    {


    printf("1. Ingresar 1er operando \n2. Ingresar 2do operando \n");
    getchar(); // pide un caracter para continuar
    printf("Ingrese una opcion del menu: \n");
    scanf("%d",&opcion);

    switch(opcion)
    {
        case 1:
        //ingresar numero();
        ingresarNumero(&num1);
        break;
        case 2:
        //ingresar numero();
        ingresarNumero(&num2);
        break;



        case 5:
        //SALIR
        flag=0;

        default:
        printf("Ingrese una opcion valida! \n");

    }




    __fpurge(stdin);
    printf("\nIngrese ENTER para continuar..."); // detalle al final
    getchar();
    system("clear");



    }while(flag !=0);






    return 0;
}

int ingresarNumero (float*numero)
{
int retorno=-1;
printf("Ingrese un numero: ");
__fpurge(stdin); // siemrpe antes de pedir un valor
scanf("%f",numero);

}

