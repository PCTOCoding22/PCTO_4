#include <stdio.h>
int main ()
{
int x;
x= 1969;
int y;
printf("inserisci anno di nascita");
scanf("%i", &y);
if (x==y)
{
    printf("%i sei nato nello stesso anno dell'uomo andato sulla luna",y );
}
else if (x<y)
{
    y=y-x;
    printf("sei nato %i anni dopo dell'uomo andato sulla luna", y);
}
else 
{
    x= x-y;
    printf("sei nato %i anni prima dell'uomo andato sulla luna",x);
}

return (0);
}