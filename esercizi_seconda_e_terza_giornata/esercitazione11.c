#include <stdio.h>
int main ()
{
    int x;
    printf ("inserisci il tuo anno: ");
    scanf ("%i", &x);
    if (x == 1689)
    {
        printf ("sei nato nell'anno in cui l'uomo è andato sulla luna\n");
    }
    else if (x < 1969)
    {
        int y;
        y = 1969 - x;
        printf ("sei nato %i anni prima dell'anno in cui l'uomo è andato sulla luna\n", y);
    }
    else
    {
        int z;
        z = x - 1969;
        printf ("sei nato %i anni dopo l'anno in cui l'uomo è andato sulla luna\n", z);
    }
    return (0);
}