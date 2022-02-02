#include <stdio.h>
int main()
{
    int x;
    int y;
    int z;
    printf("inserisci lunghezza lato");
    scanf("%i", &x);
    printf("inserisci lunghezza lato");
    scanf("%i", &y);
    printf("inserisci lunghezza lato");
    scanf("%i", &z);
    if (x != y != z)
    {
         printf("triangolo scaleno");
    }
    else if (x = y != z)
    {
        printf("trangolo isoscele");
    }
    else
    {
        printf("triangolo equilatero");
    }
    return (0);
}