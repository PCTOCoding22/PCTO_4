#include <stdio.h>

int main ()
{
    int x;
    x = 0;
    int risultato;
    risultato = 0; 
    while(x <= 2000)
    {
        x = x + 2;
        risultato = risultato + x;
    }

    printf("il risultato è: %i", risultato);
    return (0);
}