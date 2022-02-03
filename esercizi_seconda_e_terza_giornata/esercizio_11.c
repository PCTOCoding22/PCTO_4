#include <stdio.h>

int main()
{
    int x;
    printf("inserire anno x:");
    scanf("%i", &x);
    if (x == 1969)
    {
        printf("sei nato nell'anno in cui l'uomo è andato sulla luna");
    }
    else if (x > 1969)
    {
        int y;
        y = x-1969;
        printf(" sei nato %i anni dopo il primo uomo sulla luna", y);
    }
    else 
    {
        int z;
        z= 1969-x;
        printf("sei nato %i anni prima del primo uomo sulla luna", z);
    }
    return(0);
    
}