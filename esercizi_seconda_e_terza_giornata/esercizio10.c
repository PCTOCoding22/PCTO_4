#include <stdio.h>
int main ()
{
    int x;
    int y;
    int z;
    printf ("inserisci un numero x: ");
    scanf ("%i", &x);
    printf ("inserisci un numero y: ");
    scanf ("%i", &y);
    printf ("inserisci un numero z: ");
    scanf ("%i", &z);
    if (x==y && x==z && z==y)
    {
        printf ("il triangolo è equilatero\n");
    }
    else if (x!=y && y!=z && x!=z)
    {
        printf ("il triangolo è scaleno\n");
    }
    else
    {
        printf ("il triangolo è isoscele\n");
    }
    return (0);
}