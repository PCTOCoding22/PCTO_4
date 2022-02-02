#include <stdio.h>

int main()
{
    int x;
    float y;
    y= -273.15;

    printf("inserisci la temperatura x: ");
    scanf("%i",&x);

    if (x < y)
    {
        printf("ERRORE");
        return(-1);
    }
    
    else
    {
       x = (1.8)*x + 32;
       printf(" Fahrenheit è %i\n ",x);

       x = x + 273.15;
       printf("Kelvin è %i\n ", x);
    }

    return(0);
}