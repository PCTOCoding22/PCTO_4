#include <stdio.h>

int main()
{
    int x;
    x=1969;
    int y;
    printf("inserisci l'anno della tua nascita: ");
    scanf("%i", &y);
    if (y == x)
    {
        printf("sei nato nello stesso anno dello sbarco sulla luna\n");
    }
    else if (y<x)
    {
        printf("sei nato %i anni prima dello sbarco sulla luna\n", x-y);
    }
    else if (y>x)
    {
        printf("sei nato %i anni dopo lo sbarco sulla luna\n", y-x);
    }
    return(0);
}
