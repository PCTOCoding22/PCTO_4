#include <stdio.h>

int main()
{
    int x;
    printf("inserisci un numero x");
    scanf("%i", &x);
    int y;
    y = 18;
    if(x >= y)
    {
        printf("sei maggiorenne\n" );
    
    }
    else
    {
        printf("sei minorenne\n");
    }
    return (0);
}
