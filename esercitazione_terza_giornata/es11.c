#include <stdio.h>

int main()
{
    int x;
    x = 1969;
    int y;
    printf("inserisci in quale anno sei nato:");
    scanf("%i", &y);
    
    if(x == y)
    {
        printf("%i sei nato nello stesso anno in cui l'uomo è andato sulla luna\n", y);
    }
    else if (x<y)
    {
        y= y-x; 
        printf(" sei nato %i anni dopo dell'atteraggio sulla luna\n", y);
    }
    else 
    {
        x= x-y;
        printf("sei nato %i prima della'atteraggio sulla luna\n", x);
    }
    return(0);

}
