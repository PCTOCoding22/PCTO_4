#include <stdio.h>

int main()
{
int x;
printf("inserisci un età x: ");
scanf("%i", &x );
if(x >= 18)
{
    printf("x: %i è maggiorenne", x);
}
else
{
    printf("sei minorenne");
}
return(0);
}