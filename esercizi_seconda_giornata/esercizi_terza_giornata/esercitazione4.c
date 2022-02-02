#include <stdio.h>

int main ()
{
    int x;
    int y;
    printf ("inserisci l'età di guida nel tuo paese x");
    scanf ("%i", &x);
    printf ("inserisci la tua età y");
    scanf ("%i", &y);
    if (y>=x)
    {
        printf ("può avere la patente,y");
    }
    else 
    {
        printf ("non può avere la patente,y");
    }
    return (0);
}