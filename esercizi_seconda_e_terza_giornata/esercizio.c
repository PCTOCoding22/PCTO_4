#include <stdio.h>

int main() 
{
    int x;
    x = 0;
    int risultato;
    risultato = 0;
    while(x <= 100)
    {
        x = x + 2;
        risultato = risultato + x;
}
    
    printf ("Il risultato é:%i", risultato);
    return (0);
}
