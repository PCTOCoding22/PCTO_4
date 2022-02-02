#include <stdio.h>

int main()

{
    int x;
    int y;
    x=1969,
    printf("inserisci l'anno in cui sei nato x:");
    scanf("%i",&y);


    if (x == y)
    {

        printf("l'utente è nato in cui l'uomo è andato sulla luna");
    }

    else if (x < y)
    {
        y= y-x;
        printf("l'utente è nato %i anni dopo che l'uomo è andato sulla luna",y);
    }

    else
    {
        x=x-y;
        printf("l'utente è nato %i anni prima che l'uomo è andato sulla luna",x);
    }

return(0);
}