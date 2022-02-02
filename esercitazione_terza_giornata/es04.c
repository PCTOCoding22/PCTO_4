#include <stdio.h>

int main()
{
    int x;
    printf("inserisci la tua età");
    scanf("%i", &x);
    int y;
    printf("inserisci l'età maggiorenne del tuo paese");
    scanf("%i", &y);

    if(x >= y)
    {
        printf("puoi ottenere la patente\n");
    }
    else
    {
        printf(" non puoi ottenere la patente\n ");
    }
    return(0);   

}
