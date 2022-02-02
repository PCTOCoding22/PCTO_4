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
    if(x==y && y==z)
    {
        printf("è un triangolo equilatero\n");
    }
    else if ((x!=y && y!=z)&& y!=x)
    {
        printf("è un triangolo scaleno\n");
    }
    else
    {
        printf("è un triangolo isoscere\n");
    }
    return(0);

}