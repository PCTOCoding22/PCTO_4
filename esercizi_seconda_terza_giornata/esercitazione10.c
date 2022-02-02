#include <stdio.h>

int main()

{
    int x;
    int y;
    int z;
    printf("inserisci la lunghezza x:");
    scanf("%i",&x);
    printf("inserisci la lunghezza y:");
    scanf("%i", &y);
    printf("inserisci la lunghezza z:");
    scanf("%i", &z);

    if (x==y && y==z && x==z)
    {
        printf("il triangolo è equilatero");
    }

    else if (x!=y && y!=z && z!=x)
    {
        printf("il triangolo è scaleno");
    }

    else 
    {
    printf("il triangolo è isoscele");
    }
    return(0);

}