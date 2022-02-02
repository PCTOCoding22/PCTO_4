#include<stdio.h>
int main()
{
    int x;
    int y;
    int z;
    printf("Inserisci un numero x:");
scanf("%i", &x);
 printf("Inserisci un numero y:");
scanf("%i", &y);
 printf("Inserisci un numero z:");
scanf("%i", &z);

if(x+y>z && y+z>x && x+z>y)
{
printf("Questi numeri possono essere le lunghezze dei lati di un triangolo.");
}
else
{
printf("Questi numeri non possono essere le lunghezze dei lati di un triangolo.");
}
return(0);
}
