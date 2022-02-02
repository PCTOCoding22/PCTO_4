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
    if (x + y > z && y + z > x)
    {
        printf ("%i, %i e %i possono essere i lati di un triangolo", x, y, z);
    }
    else
    {
        printf ("%i, %i e %i possono essere i lati di un triangolo", x, y, z);
    }
    return (0);

}