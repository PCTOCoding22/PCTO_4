#include <stdio.h>
int main()
{
    float x;
    printf("inserisci una temperatura in celsius: ");
    scanf("%f", &x);
    
if(x < -273.15)
{
    printf("errore\n");
    return(-1);
}
float F;
F=(9/5) * x + 32;
float K;
K = x + 273.15;
printf("la temperatura in F e %f\n la temperatura  in K e: %f\n", F, K);
return(0);
}