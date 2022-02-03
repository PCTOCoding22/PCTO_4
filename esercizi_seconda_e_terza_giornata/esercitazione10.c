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
    if(a == b && c == b && a == c)
    {
        printf("triangolo equilatero\n");
    }
    else if (a != b && a != c && c != b )
    {
        printf("triangolo scaleno\n");
    }
    else
    {
        printf("triangolo isoscele\n");
    }
    return(0);
    
}