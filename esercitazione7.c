#include<stdio.h>

int main()
{
    int x;
    int y;
    int z;
    printf("inserisce numero x");
    scanf("%i" , &x);
    printf("inserisci numero y");
    scanf("%i", &z);
    if (x-y == y - z)
    {
        printf("i numeri sono in successione aritmetica");
    }
    else
    {
        printf("!i numeri non sono in successione aritmetica");
    } 
    return (0);
}