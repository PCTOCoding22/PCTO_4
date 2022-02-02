#include <stdio.h>
int main ()
{
    int x;
    printf ("inserisci un anno: ");
    scanf ("%i", &x);
    if((x%4 == 0 && x%100 !=0)|| x%400 ==0)
    {
        printf ("l'anno %i è bisestile", x);
    }
    else
    {
        printf("l'anno %i non è bisestile", x);
    }
    return(0);
}