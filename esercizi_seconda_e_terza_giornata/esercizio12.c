#include <stdio.h>
int main ()
{
    int N;
    int x = 2;
    printf ("Inserisci un numero N: ");
    scanf ("%i", &N);
    while (x<N)
    {
        //printf("%i", N);
        if (N%x==0)
        {
            printf ("%i non è primo", N);
            return (0);
        }
        x = x+1;
    }
    printf ("%i è primo", N);
    return (0);
}