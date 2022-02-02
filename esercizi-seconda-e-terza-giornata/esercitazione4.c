#include <stdio.h>

int main ()
{
    int x;
    int y;
  printf( "età necessaria per avere la patente nel tuo stato" ) ;
  scanf("%i" , &x);
  printf("inserisci la tua età");
  scanf("%i", &y);
if (y >= x)
{
    printf("puoi prendere la patente");
}
else 
{
    printf("non puoi prendere la patente");
}
return (0);
}