#include <stdio.h>
int main()
{
    int eta;
    printf("inserisci eta: ");
    scanf("%i", &eta);
    int paese;
    printf("inserisci l'eta maggiore nel tuo paese: ");
    scanf("%i", &paese);
    if(eta >= paese)
    {
        printf("puoi prendere la patente");
    }
    else
    {
        printf("non puoi prendere la patente");
    }
    return(0);
}