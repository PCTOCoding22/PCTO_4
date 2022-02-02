#include <stdio.h>

int main()

{
   int x;
   printf("inserisci la temperatura in celsius x: ");
   scanf("%i", &x);
   int y;
   int z;

   if ( x < -273.15)
   {
      printf("error\n"); 
        return (-1);
   }
    y = (1.8) * x + 32 ;
     z = x + 273.15 ;
   printf("y: %i è la temperatura in Fahrenheit, z: %i è la temperatura in Kelvin\n", y, z);
   return(0);
}