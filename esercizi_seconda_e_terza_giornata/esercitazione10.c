#include <stdio.h>
int main ()
{
    int x;
    int y;
    int z;
    printf("inserisci una lunghezza x:");
    scanf("%i", &x);
    printf("inserisci una lunghezza y:");
    scanf("%i", &y);
    printf("inserisci una lunghezza z:");
    scanf("%i", &z);
    if (x==y && y==z)
    {
        printf("%i è  un triangolo equilatero\n",x);
    }    
    else if ((x!=y && y!=z) && y!=x)
    {
        printf("%i è un triangolo scaleno\n",x);
    }

    else 
    {
        printf("%i è un triangolo isoscle\n",x);
    }
    return (0);
}