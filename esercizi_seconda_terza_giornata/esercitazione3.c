#include <stdio.h>
int main ()
{
    int eta;
   printf ("inserisci la tua eta: ");
   scanf("%i" , &eta);
   if(eta >= 18)
{
    printf("sei maggiorenne prendimi un drink");
}
else
{
printf("non sei minorenne vai a casa");
}
return(0);
}