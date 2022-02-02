#include <stdio.h>

int main ()
{
    int x;
    x = 0;
    int y;
    y = 0;
    while( x<=2000 )
    {
        x  = x + 2;
        y = y + x;
    }

    printf(" y è: %i", y);
    return (0);

}