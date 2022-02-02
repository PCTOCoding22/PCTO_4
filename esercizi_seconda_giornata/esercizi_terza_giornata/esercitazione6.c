#include <stdio.h>

float main ()
{
   float x;
   printf ("inserisci una temperatura Celsius") 
   scanf("%f", &x)
   if (x<-273.15)
   {
       printf ("errore")
       return ("-1");
   }
   float F;
   F=1.8*x+32
   float K;
   K=x+ 273.15
   printf ("la temperatura in Fahreinheit è: %f/n la temperatura Kelvin è: %f", F,
   return (0)
}

