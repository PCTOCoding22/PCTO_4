#include <stdio.h>
int main()
{
 int x;
  int y;
  printf ("inseririsci il numero X:");
  scanf("%i", &x);  
  printf("inserisci un numero Y:"); 
  scanf("%i", &y);
  if (x % y == 0)   
  {
      printf("x è multiplo di y");
  }
  else
  {
      printf ("x non è multiplo di y");
  }
  return (0);
}