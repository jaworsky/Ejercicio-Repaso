#include <stdio.h>
#include <stdlib.h>

int main()
{

void insertionSort(int array[], int size) // ordenamiento, probar con 4 de size
{
    int i;
    int j;
    int auxiliar;
    for(i=1;i<size;i++)
    {

        j=i;
        while(j>0 && auxiliar<array[j-1]) // cambiamos el signo aca y listo, el2do <>
        {
            array[j]=array[j-1];
            j--;
        }
        array[j]=auxiliar;
    }

}




 return 0;
}
