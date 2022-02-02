#include <stdio.h>
int main()
{
    int eta;
    printf("inserisci eta: ");
    scanf("%i", &eta);
    if(eta >= 18)
    {
        printf("sei maggiorene vai a bere");
    }
    else
    {
        printf("sei minorenne vai a dormire");
    }
    return(0);
}