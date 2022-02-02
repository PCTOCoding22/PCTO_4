#include <stdio.h>
int main()
{
    float x;
    printf ("inserisci una tempertura in celsius: ");
    scanf ("%f", &x);
    if (x < -273.15)
    {
        printf ("errore\n");
        return (-1);
    }
    float F;
    F = (1.8) * x + 32;
    float K;
    K = x + 273.15;
    printf ("la temp in F è: %f\n la temp in K è: %f\n", F, K);
    return (0);


}