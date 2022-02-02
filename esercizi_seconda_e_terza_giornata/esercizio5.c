#include <stdio.h>

int main ()
{
    int numero_x;
    int numero_y;
printf ("inserisci un numero_x\n");
scanf ("%i",&numero_x);
printf ("inserisci numero_y\n");
scanf ("%i",&numero_y);
if (numero_x % numero_y==0 )
{
    printf ("numero_x %i è multiplo di numero_y: %i\n", numero_x, numero_y);
}
else 
{
    printf ("numero_x %i non è multiplo di numero_y: %i\n", numero_x, numero_y);
}
return 0;
}