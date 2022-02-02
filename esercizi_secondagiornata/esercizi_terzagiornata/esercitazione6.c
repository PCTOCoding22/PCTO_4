#include <stdio.h>

int main ()
{
float x;
printf ("inserisci una temperatura in Celsius:");
scanf ("%f", &x);
if (x < -273.15)
{
    printf ("errore");
    return (-1);
}

float F;
F = (9/5) * x + 32;
float K;
K= x + 273.15;
printf("la temperatura in fahrenheit è: %f/n La temperatura in Kelvin è: %f" , F, K);
return (0);
}