#include <stdio.h>
int main()
{
    int x;
    printf("inserisci il numero x: ");
    scanf("%i", &x);
    if (x >= 18)
    {
        printf("sei maggiorenne\n");
    }
    else
    {
        printf("sei minorenne\n");
    }
    return(0);
}