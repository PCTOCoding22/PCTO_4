#include <stdio.h>

int main()
{
    int x;
    int y;
    int z; 

    printf("inserisci un numero x =");
    scanf("%i",&x);

    printf("inserisci un numero y =");
    scanf("%i",&y);

    printf("inserisci un numero z = ");
    scanf("%i",&z);

    if (x+y>z && x+z>y && y+z>x)
    {
        printf ("è un triangolo");
    }

    else
    {
        printf("non è un triangolo");
    }
 return (0);
}