#include <stdio.h>

int main()
{
    int x;
    printf("inserisci una lunghezza x:");
    scanf("%i", &x);
    int y;
    printf("inserisci una lunghezza y:");
    scanf("%i", &y);
    int z;
    printf("inserisci una lunghezza z:");
    scanf("%i", &z);
    if((x+y>=z && y+z>=x)&& z+x>=y)
    {
        printf(" è un triangolo\n");
    }
    else
    {
        printf(" non è un triangolo\n");

    }
    return(0);
}