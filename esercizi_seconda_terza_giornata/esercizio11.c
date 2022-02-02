#include <stdio.h>

int main()
{
    int x;
    printf("inserire anno x");
    scanf("%i", &x);
    if (x - 1969 = 0)
    {
        printf("sei nato nell'anno in cui uomo è andato sulla luna");
    }
    else if (x - 1969 > 0)
    {
        int y;
       y = x-1969;
        printf("sei nato %i dopo che uomo è andato sulla luna", y);
    }
    else
    {
        int z;
        z= 1969-x;
        printf(" sei nato %i prima che uomo è andato sulla luna", z);
    }
    return(0);
}