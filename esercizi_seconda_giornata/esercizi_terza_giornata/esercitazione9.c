#include <stdio.h>
int main ()
{
    int x;
    int y;
    int z;
    printf ("inserisci un numero");
    scanf ("%i" , &x);
    printf ("inserisci un numero");
    scanf ("%i" , &y);
    printf ("inserisci un numero");
    scanf ("%i", &z);
    if (z+y>x, y+x>z, x+z>y)
    {
        printf ("le lunghezze sono lati di un triangolo");
    }
    else
    {
        printf ("le lunghezze non sono lati di un triangolo");
    }
    return (0);
}