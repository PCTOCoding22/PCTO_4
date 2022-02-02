#include <stdio.h>

int main()
{
  int x;
  int y;
printf("inserisci la tua età x: ");
scanf("%i", &x);

printf("insersci età maggiorenne nel tuo paese y: ");
scanf("%i", &y);
if (x >= y)
   {
       printf("X: %i può prendere la patente", x);
   }
   else 
   {
       printf("X: %i non può prendere la patente", x);
   }
   return(0);

}