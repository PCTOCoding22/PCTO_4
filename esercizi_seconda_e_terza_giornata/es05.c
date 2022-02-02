#include <stdio.h>

int main ()
{
    int x;
    int y;
    printf("inserisci un numero x: ");
    scanf("%i", &x);
    printf("inserisci un numero y: ");
    scanf("%i", &y);
    if (x%y == 0)
    {
        printf("%i è multiplo di %i\n", x, y);
    }
    else
    {
        printf("%i non è multiplo di %i\n", x, y);
    }
    return (0);

}