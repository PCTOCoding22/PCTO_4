#include <stdio.h>
int main ()
{
    int x;
    int y;
    int z;
    printf("inserisci il numero x");
    scanf("%i", &x);
    printf("inserisci un numero y");
    scanf("%i", &y);
    printf("inserisci un numero z");
    scanf("%i", &z);
    if (z - y == y - x)
    {
        printf("%i, %i e %i sono in progressione aritmetica\n", x, y, z);
    }
    return(0);
}