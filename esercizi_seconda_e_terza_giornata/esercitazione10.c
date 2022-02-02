#include <stdio.h>
int main()
{
    int x;
    int y;
    int z;
    printf("inserisci x: ");
    scanf("%i", &x);
    printf("inserisci y: ");
    scanf("%i", &y);
     printf("inserisci z: ");
    scanf("%i", &z);

if(x == y && z == y && x == z)
{
    printf("triangolo equilatero\n");
}
else if(x != y && x != z && z != y)
{
    printf("triangolo scaleno");
}
else
{
    printf("triangolo isoscele\n");
}
return(0);
}