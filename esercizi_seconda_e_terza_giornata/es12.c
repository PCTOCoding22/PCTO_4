#include <stdio.h>

int main()
{
    int n;
    int x;
    x=2;
    printf("inserisci un numero n: ");
    scanf("%i", &n);
    while (x<n)
    {
        if (n%x == 0)
        {
            printf("%i non è un numero primo\n", n);
            return (0);
        }
        x=x+1;

    }
    printf("%i è un numero primo\n", n);
    return(0);
}