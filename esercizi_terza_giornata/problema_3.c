#include <stdio.h>

int main()
{
   int x;
   int y;
   y=18;
   printf("inserisci un numero x: ");
   scanf("%i", &x);
   if (x >= y)
   {
       printf("X: %i è maggiorenne\n", x);
   }
   else 
   {
       printf("X: %i è minorenne\n", x);
   }
   return(0);
}