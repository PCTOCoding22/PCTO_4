#include <stdio.h>

int main ()
    {
        int x;
        int y;
        printf("Inserisci un numero X: ");
        scanf("%i", &x);
        printf("Inserisci un numero Y: ");
        scanf ("%i", &y);
        if (x>y)
        {
            printf("x: %i è maggiore di Y: %i\n", x, y);
        }
        else
        {
 printf("x: %i è minore o uguale di Y: %i\n", x, y);
        }
        return (0);

    }