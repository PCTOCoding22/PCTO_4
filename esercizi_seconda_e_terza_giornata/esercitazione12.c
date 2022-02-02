#include <stdio.h>
int main ()
{
    int n;
    int x = 2;
    printf ("inserisci un numero n: ");
    scanf ("%i", &n);
    while (x < n)
    {
        if (n%x == 0)
        {
            printf ("%i, non è primo", n);
            return (0);
        }
        x = x+1;
    }
    printf ("%i è primo", n);   
    return (0);
}   