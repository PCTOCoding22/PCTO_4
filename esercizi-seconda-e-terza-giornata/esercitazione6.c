#include <stdio.h>
float main()
{
 float x;
 printf("inserisci una temperatura in celsius");
 scanf("%f", &x);
 if(x < 273.15)
 {
  printf("errore");
  return(-1);
 }
 float f;
 f = (1.8) * x + 32;
float k;
k = x + 273.15;
 printf("temperatura in f è: %f\n", f);
 printf("temperatura in k è: %f\n", k);
 return (0);
}
