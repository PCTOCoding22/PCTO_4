#include <stdio.h>
int main ()
{
    int x;
    int y;
    int z;
    printf ("inserisci un valore x: ");
    scanf ("%i", &x);
    printf ("inserisci un valore y: ");
    scanf ("%i", &y);
    printf ("inserisci un valore z: ");
    scanf ("%i", &z);
    if (x == y && z == y)
    {
        printf ("in triangolo è equilatero\n");
    }
    else if (x != y && x != z)
    {
        printf ("il triangolo è scaleno\n");
    }
    else
    {
        printf ("il triangolo è isoscele\n");
    }
    return (0);

}