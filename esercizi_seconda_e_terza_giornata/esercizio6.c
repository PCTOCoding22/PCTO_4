#include <stdio.h>

int main ()
{
   float C;
   printf ("inserisci una temperatura in C°\n");
   scanf ("%f", &C);
   if (C > -273.15)   
   {
       printf ("errore\n");
       return(-1);
   }
   float K;
   K= C+273.15;
   printf ("la temperatura in Kelvin è: %f\n", K);
   float F;
   F= (1.8)*C+32;
   printf ("la temperatura in fahrenheit è: %f\n", F);
   return 0;
}