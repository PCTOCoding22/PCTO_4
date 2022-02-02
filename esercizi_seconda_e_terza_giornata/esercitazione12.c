#include <stdio.h>
int main()
{ 
    int n;
    int x = 2;
    printf("inserisci numero n");
    scanf("%i", &x);
    while (x < n)
    {
         if (n%x == 0)
         {
             printf("%i n no primo", n);
             return (0);
         }
         x = x + 1;
    }
   printf("%i n è primo", n);
    return (0);
}
