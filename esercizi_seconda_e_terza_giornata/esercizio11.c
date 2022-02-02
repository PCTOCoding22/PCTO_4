#include <stdio.h>
int main ()
{
    int x;
    printf ("inserisci il tuo anno di nascita: ");
    scanf ("%i", &x);
    if (x==1969)
    {
        printf ("Sei nato quando l'uomo è andato sulla luna\n");
    }
    else if (x<1969)
    {
        int y;
        y = 1969-x;
        printf ("Sei nato %i anni prima dell'anno in cui l'uomo è andato sulla luna\n", y);
    }
    else 
    {
        int z;
        z = x-1969;
        printf ("Sei nato %i anni dopo dell'anno in cui l'uomo è andato sulla luna\n", z);
    }
    return (0);
}