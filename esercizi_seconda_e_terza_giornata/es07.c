#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    printf("inserisci un numero x: \n");
    scanf("%i", &x);
    printf("inserisci un numero y: \n");
    scanf("%i", &y);
    printf("inserisci un numero z: \n");
    scanf("%i", &z);
    if (z - y == y - x)
    {
        printf("i numeri sono in progressione aritmetica\n");
    }
    else
    {
        printf("i numeri non sono in progressione aritmetica\n");
    }
    return(0);
}