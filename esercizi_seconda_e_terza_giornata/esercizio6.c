#include <stdio.h>

int main()
{
    float x;
    printf("inserisciuna temperatura in celsius: ");
    scanf ("%f" , &x);
    if (x < -273.15)
    {
        printf("errore");
        return (-1);
    }

    float F;
    F = (9/5)* x + 32;
    float K; 
    k = x + 273,15;
    printf ("La temperatura in Fahrenheit è: %f\n La temperatura in kelvin è:%f", F, K);
    return (0);
    }