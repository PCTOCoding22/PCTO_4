#include <stdio.h>

int main ()
{
    int x;
    printf("inserisci un anno: \n");
    scanf("%i", &x);
    if ((x%4==0 && x%100!=0)|| x%400 == 0)
    {
        printf("l'anno è bisestile\n");
    }
    else
    {
        printf("l'anno non è bisestile\n");
    }
    return(0);
}