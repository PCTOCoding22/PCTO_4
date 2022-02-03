#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    printf("inserisci il numero x:");
    scanf ("%i", &x);
    printf ("inserisci il numero y:");
    scanf ("%i", &y);
    printf ("inserisci il numero z:");
    scanf ("%i", &z);

    if(z-y == y-x)
    {
        printf("i numeri sono in progressione aritmetica");
    }
    else
    {
        printf("non sono una progressione aritmetica");
    }
    return(0);

}
