#include<stdio.h>
int main()
{
    float x;
    printf("Inserisci una termperatura in celcius x:");
    scanf("%f", &x);
    
    if(x < -273.15)
    {
        printf("errore");
    }
    else
    {
        float Fahrenheit;
        Fahrenheit = ((1.8)*x) + 32;
        printf("La temperatura in Fahrenheit: %f", Fahrenheit);
        float Kelvin;
        Kelvin = x +273.15;
        printf("La temperatura in Kelvin: %f", Kelvin);
    }
    return(0);
}