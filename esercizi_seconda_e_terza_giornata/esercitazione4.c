#include <stdio.h>
int main ()
{
    int x;
    int y;
    printf ("inserisci a che eta si puo prendere la patente nel tuo paese: ");
    scanf ("%i", &x);
    printf ("inserisci la tua eta: ");
    scanf ("%i", &y);
    if (y >= x)
    {
        printf ("puoi prendere la patente \n");
    }
    else
    {
        printf ("non puoi prendre la patente \n");
    }
    return (0);
}