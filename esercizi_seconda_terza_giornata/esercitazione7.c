#include <stdio.h>

int main()

{
    int x;
    int y;
    int z;
    printf("inserisci un numero x:");
    scanf("%i",&x);
    printf("inserisci un numero y:");
    scanf ("%i", &y);
    printf("inserisci un numero z:");
    scanf ("%i", &z);

if (z-y == y - x == 1)
{
    printf("x: %i, y: %i, z: %i è una sequenza", x, y, z);
}
else
{
    printf("x: %i, y: %i, z:%i non è una sequenza",x, y, z);


}

return(0);
}