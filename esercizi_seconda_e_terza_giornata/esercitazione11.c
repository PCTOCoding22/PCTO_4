#include <stdio.h>
int main()
{ 
    int x;
    printf("inserisci un anno di nascita");
    scanf("%i", &x);
    if (x == 1969)
    {
        printf("sei nato nel 1969");
    }
    else if (x > 1969)
    {
        int d;
        d= x - 1969;
        printf("sei nato: %i\n", d);
    }
    else
    {
        int p;
        p = 1969 - x;
        printf("sei nato: %i\n", p);
    }
    return (0);
}