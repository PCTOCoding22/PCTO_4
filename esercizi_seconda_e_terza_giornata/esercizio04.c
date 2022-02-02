#include <stdio.h>
int main ()
{
    int x;
    int y;
    printf ("inserisci a quanti anni si può prendere la patente nel tuo paese: ");
    scanf ("%i", &x);
    printf ("inserisci la tua età: ");
    scanf ("%i", &y);
    if (y>=x)
    {
        printf ("puoi prendere la patente\n");
    }
    else
    {
        printf ("non puoi prendere la patente\n");
    }
    return (0);
}