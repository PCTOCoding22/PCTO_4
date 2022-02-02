#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("inserire a: ");
    scanf("%i", &a);
    printf("iserire b: ");
    scanf("%i", &b);
    printf("inserire c: ");
    scanf("%i", &c);
    if(a + b > c && b > a)
    {
        printf("%i, %i e %i possono eseere dei lati di un triangolo ", a,b,c);
    }
    else
    {
        printf("%i, %i e %i non possono essere i lati di un triangolo", a,b,c);
    }
    return(0);
}