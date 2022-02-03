#include <stdio.h>

int main()
{
    int x, y;
    printf ("quando puoi prendere la patente nel tuo paese x:");
    scanf ("%i", &x);
    printf ("inserisci la tua età y:");
    scanf ("%i", &y);
    if ( y>=x)
    {
        printf("puoi prendere la patente");
    }
    else
    {
        printf ("non puoi prendere la patente");
    }
     return(0);
}