#include <stdio.h>

int main()
{
    int x;
    int y;
    printf("inserisci l'età che devi avere per prendere la patente nello stato in cui vivi x:");
    scanf("%i", &x);
    printf("inserisci la tua età y:");
    scanf("%i", &y);

    if (x>y)
    {
        printf ("l'utente può prendere la patente");
    }
    
    else
    {
        printf("l'utente non può prendere la patente");
    }
    return(0);
}
