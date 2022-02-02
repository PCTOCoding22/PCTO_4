#include <stdio.h>
int main()
{
    float x;
    printf("temperatura in celcius: ");
    scanf("%f", &x);
    
    if(x < -273.15)
    {
        printf("errore\n");
        return(-1);
    }
    float F;
    F = (1.8) * x + 32;
    float K;
    K = x + 273.15;
    printf("la temperatura in F e di %f\n quella in K e di: %f\n", F, K);
    return(0);
}