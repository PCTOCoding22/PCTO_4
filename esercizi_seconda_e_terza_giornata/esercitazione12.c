#include <stdio.h>

int main()
{
    int n;
    printf ("inserire un numero: ");
    scanf ("%i", &n);
    int x;
    x = 2;
    while(x<=n-1)
    {
        if(n%x==0)
        {
            printf ("%i non e un numero primo\n", n);
            return(0);
        }
        x = x + 1;
    }
    printf ("%i e un numero primo\n", n);
    return (0);
}