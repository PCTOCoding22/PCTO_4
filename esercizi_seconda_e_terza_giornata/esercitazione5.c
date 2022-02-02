#include <stdio.h>

int main ()
{
int X;
int Y;
printf("inserisci un numero X: ");
scanf("%i", &X);
printf("inserisci un numero Y: ");
scanf("%i", &Y);
if (X % Y == 0)
{
    printf("X: %i è multiplo di Y: %i\n", X, Y);

}
else 
{
    printf("X: %i non è un multiplo di Y: %i\n", X,Y);
}
return (0);

}