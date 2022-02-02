#include<stdio.h>
int main()
{
    int x;
    int y;
    printf("Inserisci un numero x:");
scanf("%i", &x);
printf("inserisci un numero y:");
scanf("%i", &y);

if(x % y == 0)
{
printf("x è multiplo di y");
}
else
{
printf("x non ò mulpiplo di y");
}
return(0);
}