#include <stdio.h>

int main()
{
    int x;
    x=0;
    while (x<100)
    {
        printf("\n%i", x++);
        {
            if(x<10)
            printf("\n0%i", x++);
        }
    }
    return(0);
}