#include <stdio.h>
int main()
{
    int x;
    int y;
    int z;
    printf("inserisci numero x: ");
    scanf("%i",&x);
    printf("inserisci numero y: ");
    scanf("%i",&y);
    printf("inserisci numero z: ");
    scanf("%i",&z);
    if( x - y == y- z)
{
    printf("i numeri sono in successione aritmetica");
}
else 
{
    printf("i numeri non sono in successione artimetica");
}
return (0);
}