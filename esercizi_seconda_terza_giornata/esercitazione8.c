#include <stdio.h>

int main()

{
  int x;
  printf("inserisci l'anno x:");
  scanf("%i",&x);

  if (x%4==0 && x%100!=0)
  {
      printf("x: %i è un anno bisestile",x);

  }
  else if (x%400 == 0)
  {
      printf ("x: %i è un anno bisestile",x);
  }

  else 
  printf("x: %i non è un anno bisestile",x);

  return(0);

  
}
