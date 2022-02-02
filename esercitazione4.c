#include<stdio.h>

int main ()
{
    int x;
    int y;
    printf("inserisci l'età in cui si può prendere la patente");
    scanf("%i" , &x);
    printf("inserisci la tua età");
    scanf("%i", &y);
    if(y >= x)
    {
       printf("puoi prendere la patente");
    }
    else
    {
       printf("non puoi prendere la patente");
    }
    return(0);  
}