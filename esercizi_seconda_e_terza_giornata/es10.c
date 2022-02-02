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

if(x==y && y==z && z==x)
{
printf("Il triangolo è equilatero.");
}
else if(x==y && y==z && x!=z)
{
printf("Il triangolo è isoscele.");
}
else
{
 printf("Il triangolo è scaleno.");   
}
return(0);
}
