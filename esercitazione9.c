#include<stdio.h>

int main()
{
    int x;
    int y;
    int z;
    printf("inserisce un numero x: \n");
    scanf("%i", &x);
    printf("inserisci un numero y: \n");
    scanf("%i", &y);
    printf("inserisci un numero z. \n");
    if((x+y > z)&&(x+y > y)&&(y+z > x))
    {
        printf("i numeri possolo essere le lunghezze di un triangolo\n");
    }  
    return(0);
}