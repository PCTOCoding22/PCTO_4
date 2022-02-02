#include <stdio.h>

int main()
{
    int x;
    printf("inserisci un numero x");
    scanf("%i", &x);
    int y; 
    y=2;
    while(y<x)
    {
      if (x%y==0)
      {
          printf("%i non è un numero primo\n", x);
          return(0);
      }
      y = y+1;
    
     
    }
    printf("%i è un numero primo\n",x);
    return(0);
    
}
