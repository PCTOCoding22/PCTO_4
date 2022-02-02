#include <stdio.h>
int main()
{
  int x;
  int y;
  int z;   
   printf("inserisci numero x: ");
    scanf("%i",&x);
    printf("inserisci numero y: ");
    scanf("%i",&y);
    printf("inserisci numero z: ");
    scanf("%i",&z);
    if ( x + y < z && y + z > x && x + z > y)
    {
        printf("sono le lunghezze dei lati di un triangolo");
    }
    else 
    {
        printf("non sono le lunghezze dei lati di un triangolo");
    }
    return (0);   

}