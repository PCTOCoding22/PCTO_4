#include <stdio.h>

int main()
{
    int n;
    printf("inserire un numero n: ");
    scanf("%i",&n);
    int x;
    x=2;
    while (x<=n-1)
    {
        if(n%x==0)
        {
            printf("%i non è un numero primo\n",n);
            return(0);
        }
        x=x+1;
    }
    printf("%i è un numero primo",n);
    return(0);

}