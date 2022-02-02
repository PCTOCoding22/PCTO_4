#include <stdio.h>

int main()
{
int x;
int gianfilibertojunior;
printf("inserisci la tua età");
scanf("%i", &x);
printf("quando puoi prendere la patente nel tuo paese");
scanf("%i", &gianfilibertojunior);
if (x >= gianfilibertojunior)
{
    printf("x: %i ha un età minima per la patente");
}

return(0);
}