#include <stdio.h>

int main()
{
   int x;
   int pippo;
   printf("Inserisci la tua età");
   scanf("%i", &x);
   printf("quando puoi prendere la patente nel tuo paese");
   scanf("%i", &pippo);
   if (x>= pippo)
   {
        printf("x: %i ha età minima per la patente", x);
   }
   else
   {
        printf("non ha età minima per la patente");
   }
   return(0);
}