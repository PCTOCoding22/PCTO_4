#include <stdio.h>

int main()
{
    int x;
    printf("inserisci un anno");
    scanf("%i" , &x);
    if (x % 4 == 0 && x % 100 !=0 ||x % 400 ==0)
    {
        printf("anno bisestile");
    }
    else
    {
        printf("anno non bisestile");
    }
    return (0);

}