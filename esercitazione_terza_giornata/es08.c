#include <stdio.h>

int main()
{
    int x;
    printf("inserisci un anno:");
    scanf("%i", &x);
    if((x%4==0 && x%100!=0)||x%400==0)
    {
        printf("x:%i è un anno bisestile\n", x);
    }
    else 
    {
        printf("x:%i non è un anno bisestile\n", x);
    }
    return(0);
}