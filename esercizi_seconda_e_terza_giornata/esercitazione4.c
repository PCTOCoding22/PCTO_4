#include<stdio.h>
int main()
{
int x;
int y;
printf("Inserisci l'età a cui puoi prendere la patente nel tuo paese x:");
scanf("%int", &x);
printf("Quanti anni hai? y:");
scanf("%int", &y);
if(x > y)
{
printf("Non puoi prendere la patente.");
}
else 
{
printf("Puoi prendere la patente.");
}
return(0);
}
