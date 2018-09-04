#include <stdio.h>
#include "validaredad.h"

int getInt (char msjok[], char msjerror[], int limitemax, int limitemin)

{

int edad;

printf("%s\n\n", msjok);
scanf("%d",&edad);

while(edad<limitemin || edad>limitemax)
{
    printf("%s\n",msjerror);
    scanf("%d",&edad);
}

return edad;

}
