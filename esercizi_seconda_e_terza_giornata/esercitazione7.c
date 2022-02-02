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
    if (z - y == y - x)
    {
        printf ("%i, %i e %i sono in prograssione aritmetica\n", x, y, z);
    }
    else
    {
        printf ("%i, %i e %i non sono in prograssione aritmetica\n", x, y, z);
    }
    return (0);
}