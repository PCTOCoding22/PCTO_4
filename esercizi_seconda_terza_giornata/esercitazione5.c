#include <stdio.h>

int main()

{
    int x;
    int y;

    printf ("inserisci un numero x:");
    scanf("%i", &x);
    printf ("inserisci un numero y");
    scanf ("%i", &y);
    
    if (x % y == 0)
    {
        printf("x: %i è multiplo di y: %i\n", x, y);
    }
    
    else
    {
        printf("x: %i non è multiplo di y: %i\n", x, y);
    }
    return(0);
}