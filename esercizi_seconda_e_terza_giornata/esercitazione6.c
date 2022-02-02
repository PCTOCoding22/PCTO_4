#include <stdio.h>
int main()
{ 
    float x;
    printf("inserisci una temperatura in celsius");
     scanf("%i", &x);
     if (x < -273.15)
     {
         printf("errore\n");
         return(-1);
     }
     float F;
     F = (1.8) * x + 32;
     float K;
     K= x + 273.15;
     printf("le temperatura in F è: %f\n la temperatura in K è: %f", F, K);
     return (0);
}