#include <stdio.h>

int main()
{ 
    int x;
    printf("inserisci una temperatura in C°");
    scanf("%i", &x);

    if(x < -273.15)
    {
        printf("x: %i temperatura è minore dello zero assoluto\n", x);
    }
    else if (x >= -273.15)
    {
        x = 1.8* x + 32;
        printf("la temperatura in fahrenheit: %i\n ",x);
        x = x + 273.15;
        printf("la temperatura in kelvin:%i\n", x);
    }
    return(0);

}