#include <stdio.h>

int main()
{
    int x;
    int y;
    y=18 ;
    printf("inserisci la tua età x:");
    scanf("%i", &x);
   
    if (x<y)
    {
        printf("l'utente  è minorenne");

    }
     else
     {
         printf("l'utente è maggiorenne");
     }
     return(0);
}