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
    if(c - b == b - a)
    {
        printf("%i, %i e %i sono una progressione aritmetica\n", a,b,c);
    }
    else
    {
        printf("%i, %i e %i non sono una progressione aritmetica\n", a,b,c);
    }
    return(0);
}