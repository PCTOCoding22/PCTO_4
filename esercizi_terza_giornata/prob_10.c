#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;

    printf("inserisci il numero x = ");
    scanf ("%i",&x);
    printf("inserisci il numero y = ");
    scanf ("%i",&y);
    printf("inserisci il numero z = ");
    scanf ("%i",&z);

    if (x == y && y == z && z == x)
    {
        printf("il triangolo è equilatero");
    }

    else if (x!=y && y!=z && z!=x)
    {
        printf("il triangolo è scaleno");
    }

    else
    {
        printf(" il triangolo è isoscele");
    }
return (0);

}