#include <stdio.h>
int main()
{
    int eta;
    printf("inserisci la tua eta: ");
    scanf("%i", &eta);
    
    int paese;
    printf("quando puoi prendere la patente nel tuo paese: ");
    scanf("%i", &paese);
if(eta >= paese)
{
    printf("sei maggiorenne puoi prendere la patente");
}
else
{
    printf("sei minorenne non puoi prendere la patente");
}
return (0);
}
