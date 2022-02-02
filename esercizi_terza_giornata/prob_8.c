#include <stdio.h>

int main()
{
    int x;
    int y;
    y = 4;
    int z;
    z = 100;
    int j;
    j = 400;

    printf("inserisci un anno x =");
    scanf("%i",&x);

    if (x%y==0 && x%z!=0) // (x%j==0)
    {
        printf("X: %i è un anno bisestile",x);
    }

    else 
    {
        printf("X: %i non è un anno bisestile",x);
    }

    return (0);

}