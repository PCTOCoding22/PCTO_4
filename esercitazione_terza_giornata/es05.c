#include <stdio.h>

int main()
{
    int x;
    printf("inserisci un numero x :");
    scanf("%i", &x);
    int y;
    printf("inserisci un numero y :");
    scanf("%i", &y);
    
    if (x % y == 0)    
    {
        printf("x: %i è multiplo di y: %i\n", x ,y);
    }
    else
    {
        printf("x: %d non è un multiplo di y: %d\n",x ,y);
    }
    return(0);

}