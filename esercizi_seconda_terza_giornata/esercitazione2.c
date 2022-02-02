#include <stdio.h>

int main()
{
    int x; 
    int y;
    printf("inserisci un numero x:");
    scanf("%i", &x);
    printf("inserisci un numero y:");
    scanf("%i", &y);
    if(x > y)
    {
       printf("x: %i è maggiore di y: %i\n", x, y);
    
    }
    else
    {
       printf("x: %i è minore o uguale di y: %i\n", x, y);
    }
    return(0);
}