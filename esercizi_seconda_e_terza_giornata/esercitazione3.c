#include <stdio.h>

int main ()
{
int x;
printf("Inserisci un numero x: ");
scanf("%i", &x);
int y; 
y = 18;
if (x >= 18)
{
    printf("X : %i è maggiorenne",x );
}

else
{
    printf ("x: %i è minorenne", x);

}
return (0);

}