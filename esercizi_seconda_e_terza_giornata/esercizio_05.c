#include <stdio.h>

int main()
{
    int x, y;
    printf ("inserisci il primo numero x:");
    scanf("%i", &x);
    printf("inserisci y < x:");
    scanf("%i", &y);
    if (x%y == 0)
    {
        printf("è un multiplo");
    }
    else
    {
        printf("non è multiplo");
    }
    return(0);

}