#include <stdio.h>

int main ()
{
    int x;
    printf ("inserisci un età");
    scanf ("%i", &x);
    if (x>=18)
    {
        printf ("l'utente è maggiorenne");
    }
    else
    {
        printf (" l'utente è minorenne");
    }
    return 0;
} 
    