#include <stdio.h>
int main()
{
    int x;
    int y;
    int z;
    printf("inserisci il numero x: \n");
    scanf("%i" , &x);
      printf("inserisci il numero y: \n");
    scanf("%i", &y);
      printf("inserisci il numero z: \n");
    scanf("%i" , &z);
if ((x+y > z)&&(x+z >y)&&(y+z >x))
{
    printf("i numeri possono essere le lunghezze di un triangolo\n");
}
else
{
    printf("i numeri non posoono essere le lunghezze di un triangolo");
}
return(0);
}