#include <stdio.h>

int main()
{
    int x;
    x=0;
    int y;
    y=0;
    while (x<10)
    {
        y=0;
        while(y<10)
        {
           printf("%i%i\n", x, y);
           y=y+1;
        }
        x=x+1;
    }
    return(0);
}