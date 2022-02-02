#include <stdio.h>

int main()
{
    int x;
    printf("Inserisci un anno x");
    scanf("%i", &x);
    if ((x%4 == 0 && x%100 != 0)  || x%400 == 0)
    {
       printf("l'anno è bisestile");
    }
    else
    {
       printf("l'anno non è bisestile");
    }
      return (0);  
}