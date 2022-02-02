#include <stdio.h>

int main ()
{
    int x;
    int y;
    printf("Inserisciun numero x:");
    scanf("%i" , &x);
    printf("Inserisci un numero Y:");
    scanf("%i" , &y);
    if (x > y)
    {
        printf("x: %i è maggiore di Y: %i\n",  y);
    }
    else
    {
        printf("x: %i è minore di Y: %i\n", x, y);
    }
    return (0);
}