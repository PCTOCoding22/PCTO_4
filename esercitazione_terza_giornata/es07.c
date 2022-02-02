#include <stdio.h>

int main()
{
    int x;
    printf("inserisci un numero x:");
    scanf("%i", &x);
    int y;
    printf("inserisci un numero y:");
    scanf("%i", &y);
    int z;
    printf("inserisci un numero z:");
    scanf("%i", &z);

    if(x - y == y - z)
    {
        printf("è una progressione aritmetica\n");
    }
    else 
    {
        printf("non è una progressione aritmetica\n");
    }
    return(0);
}