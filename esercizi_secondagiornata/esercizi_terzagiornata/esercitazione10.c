#include <stdio.h>

int main ()
{
    int x;
    int y;
    int z;
    printf("inserisci lunghezza lato");
    scanf("%i" , &x);
    printf("inserisci lunghezza lato");
    scanf("%i", &z);
    printf("inserisci lunghezza lato");
    scanf("%i" , &z);
    if (x == y == z)
    {
        printf("il triangolo è equilatero\n");
    }
    else if (x != y != z)
    {
        printf("triangolo è scaleno\n");
    }
    else
    {
        printf("triangolo isoscele\n");
    }
    return (0);
}