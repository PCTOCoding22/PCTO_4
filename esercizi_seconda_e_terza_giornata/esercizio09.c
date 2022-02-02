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
    if (x+y>z && x+z>y && y+z>x)
    {
        printf ("%i, %i e %i possono essere i lati di un triangolo\n", x, y, z);
    }
    else
    {
        printf ("%i, %i e %i non possono essere i lati di un triangolo\n", x, y, z);
    }
    return (0);
}