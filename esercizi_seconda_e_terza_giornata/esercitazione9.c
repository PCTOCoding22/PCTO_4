#include <stdio.h>
int main()
{
    int x;
    int y;
    int z;
    printf("inserisci un numero x:");
    scanf("%i", &x);
    printf("inserisci un numero y:");
    scanf("%i", &y);
    printf("inserisci un numero z:");
    scanf("%i", &z);

    if (x+y>z && y+z>x && z+x>y)
    {
        printf("non si può formare un triangolo");
    }
    return(0);
}