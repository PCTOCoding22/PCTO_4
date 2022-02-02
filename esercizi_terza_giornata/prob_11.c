#include <stdio.h>

int main()
{
    int x;
    int y;
    y = 1969;

    printf("inserisci il tuo l'anno di nascita x =");
    scanf("%i",&x);

    if(x==y)
    {
    printf("0");
    }

    else if ( x < y )
    {
        x = y - x ; 
        printf("sei nato %i anni prima",x);
    }

    else
    {
        y = x - y ;
        printf("sei nato %i anni dopo",y);
        
    }
    
    return(0);
}