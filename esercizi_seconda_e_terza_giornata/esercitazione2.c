#include <stdio.h>

int main()
{
    int x;
    int y;
    printf("inserisci il numero X:");
    scanf("%i", &x);
    printf("inserisci un numero Y: ");
    scanf("%i", &y);
    if(x > y)
    {
        printf("X: %i è maggiore di Y: %i\n", x, y);
    }
    else
    {
        printf("X: %i è minore o uguale di Y: %i\n", x, y);
    }
    return (0);
}
