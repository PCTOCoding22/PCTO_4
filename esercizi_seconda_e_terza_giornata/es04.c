#include <stdio.h>

int main()
{
    int x;
    int y;
    printf("inserisci l'età necessaria per conseguire la patente nel tuo stato: ");
    scanf("%i", &x);
    printf("inserisci la tua età: ");
    scanf("%i", &y);
    if(y>=x)
    {
        printf("puoi conseguire la patente\n");
    }
    else
    {
        printf("non puoi conseguire la patente\n");
    }
    return(0);

}