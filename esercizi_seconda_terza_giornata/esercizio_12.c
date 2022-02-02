#include <stdio.h>
int main()
{
    int n;
    printf("inserisci numero n");
    scanf("%i", &n);
    int x;
    x = 2;
    while (x <= n - 1)
    {
        if (n % x  == 0)
        {
            printf("%i non è primo\n", n);
            return (0);
        }
        x = x + 1;
    }
    printf("%i è primo\n", n);
    return (0);
}
  