#include <stdio.h>
int main()
{ 
    int x;
    int y;
    int z;
    printf("inserisci un numero x");
    scanf("%i", &x);
    printf("inserisci un numero y");
    scanf("%i", &y);
    printf("inserisci un numero z");
    scanf("%i", &z);
    if (x - y == y - z)
    {
        printf("i numeri sono in successione aritmetica");
    }
    else
    {
        printf("i numeri non sono in successione aritmetica");
    }
    return (0);
}