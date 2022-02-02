#include <stdio.h>
int main()
{ 
    int x;
    int y;
    int z;
    printf("lunghezza lato");
    scanf("%i", &x);
    printf("lungheza lato");
    scanf("%i", &y);
    printf("lunghezza lato");
    scanf("%i", &z);
    if (x != y != z)
    {
        printf("triangolo scaleno");
    }
    else if (x = y != z)
    {
        printf("triangolo isoscele");
    
    }
    else
    {
        printf("triangolo equilatero");
    }
    return (0);
}