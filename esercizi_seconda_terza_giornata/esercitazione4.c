#include <stdio.h>
int main ()
{
    int eta;
   printf ("inserisci la tua eta: ");
   scanf("%i" , &eta);

   int paese;
   printf("quando puoi prendere la patente nel tuo paese");
scanf("%i" , &paese);
 if(eta >= 18)
{
    printf("sei maggiorenne prendi la patente");
}
else
{
printf("non sei maggiorenne lascia il volante");
}
return(0);
}