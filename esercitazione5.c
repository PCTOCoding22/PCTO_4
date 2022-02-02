#include <stdio.h>
int main()
{
    int x;
    int y;
    printf("inserisci un numero x");
    scanf("%i" , &x);
    printf("inserisci numero y");
    scanf("%i" , &y);
    if (x % y ==0)
    {
        printf("x è multiplo di y");
    }
    else
    {
        printf("x non è multiplo di y");
    }
    return(0);
}