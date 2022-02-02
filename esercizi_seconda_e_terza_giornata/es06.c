#include <stdio.h>

int main()
{
    float x;
    printf("inserisci una temperatura in celsius: ");
    scanf("%f", &x);
    if (x < -273.15)
    {
        printf("errore");
        return (-1);
    }
    else
    {
       float F;
       F = (1.8) * x + 32;
       float K;
       K = x + 273.15;
       printf("la temperatura in F è: %f\nla temperatura in K è %f\n", F, K);
    }
    return (0);



}