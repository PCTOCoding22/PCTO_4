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

if(y-x==z-y)
{
printf("Questi numeri sono in progressione aritmetica.");
}
else
{
printf("Questi numeri non sono in progressione aritmetica.");
}
return(0);
}
