#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("inserisci un numero x: ");
    scanf("%i",&x);

    printf("inserisci un numero y ");
    scanf("%i",&y);

    if(x % y == 0)
    {
        printf("X: %i è multiplo di  Y: %i\n", x, y);

    }

    else
    {
        printf("X: %d non è un multiplo di Y: %d\n", x, y);
    }

    return (0);

}