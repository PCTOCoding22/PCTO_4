#include <stdio.h>
int main ()
{
    int x;
    int y;
    int z;
    printf("inserisci un numero");
    scanf("%i" , &x);
    printf("inserisci un numero");
    scanf("%i" , &z);
    printf("inserisci un numero");
    scanf("%i" , &z);
    if (x + y > z && y + z > x && x + z > y)
    {
        printf("sono lunghezze di lati di un triangolo");
    }
    else
    {
        printf("non sono lunghezze dei lati di un triangolo");
    }
    return (0);
}