#include<stdio.h>
int main()
{
    int x;
    printf("Inserisci un numero x:");
scanf("%i", &x);

if(x%4==0 && x%100!=0 || x%400==0)
{
printf("Quest'anno è bisestile.");
}
else
{
printf("Quest'anno non è bisestile.");
}
return(0);
}
