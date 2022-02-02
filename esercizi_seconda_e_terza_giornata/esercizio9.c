#include <stdio.h>
int main()
{
    int x;
    int y;
    int z;
    printf("inserisci un numero x: \n");
    scanf("%i", &x);
    printf("inserisci un numero y: \n");
    scanf("%i", &y);
    printf("inserisci un numero z: \n");
    scanf("%i", &z);
    if((x+y > z)&&(x+z >y)&&(y+z >x))
    {
        printf("i numeri possono essere le lunghezze di un triangolo\n");
    }
    else
    {
        printf("i numeri non possono essere le lunghezze di un triangolo\n");
    }
    return(0);
    }