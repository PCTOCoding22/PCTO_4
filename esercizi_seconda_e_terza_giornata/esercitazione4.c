#include <stdio.h>

int main ()
{
    int x;
    printf ("inserisci età: ");
    scanf("%i", &x);
    int y;
    printf ("inserisci età rischiesta per prendere la patente: ");
    scanf ("%i", &y);
    if (x >= y)
{
    printf("x: %i può prendere la patente",x );
}

else 
{
    printf("x: %i non può prendere la patente", x);
}
return (0);

}