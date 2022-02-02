#include <stdio.h>
int main ()
{
    float x;
    printf ("inserisci una temperatura in Celsius: ");
    scanf ("%f", &x);
    if (x < -273.15)
    {
        printf ("errore");
        return (-1);
    }

    float F;
    F = 1.8 * x + 32;
    float K;
    K = x + 273.15;
    printf ("La temperatura in Fahrenheit è: %f\n La temperatura in Kelvin è: %f", F, K);
    return (0);
}