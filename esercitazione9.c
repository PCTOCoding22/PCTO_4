#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    printf("inserisce un numero x:\n");
    scanf("%i" , &x);
    printf("inserisce un numero y:\n");
    scanf("%i" , &y);
    printf("inserisce un numero z. \n");
    if((x+y > z)&&(x+y > y)&&(y+z >x))
    {
        printf("i numeri possono essere la lunghezza di un trangolo\n");
    }
    return(0);
}