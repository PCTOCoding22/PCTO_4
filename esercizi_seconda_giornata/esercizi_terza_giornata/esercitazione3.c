#include <stdio.h>
int main ()
{
    int x;
    int y;
    printf ("inserisci un'età x");
    scanf("%i", &x);
    if (x>=18)
    {
        printf ("x: %i è maggiorenne",x);
    }
    else
    {
        printf ("x: %i è minorenne",x);
    }
    return (0);
}