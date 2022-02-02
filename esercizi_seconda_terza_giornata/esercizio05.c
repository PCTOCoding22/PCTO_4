#include <stdio.h>

int main()
{
   int x;
   int y; 
   printf("Inserisci il primo numero x");
   scanf("%i", &x);
   printf("inserisci un numero  y < x");
   scanf("%i", &y);
   if (x%y == 0)
   {
        printf("x è un multiplo di y");
   }
   else
   {
        printf("x non è un multiplo di y");
   }
   return(0);
 }     

