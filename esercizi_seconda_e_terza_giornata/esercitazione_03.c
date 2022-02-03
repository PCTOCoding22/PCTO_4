#include <stdio.h>

int main()
{
    int x;
    printf("Inserisci la tua età x:");
    scanf("%i", &x);
    if ( x >= 18)
    {
        printf("sei maggiorenne");
    }
    else
    {
        printf("sei minorenne");
    }
    return (0);
    
}