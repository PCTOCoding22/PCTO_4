#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;

 printf("inserisci un numero x =");
 scanf("%i", &x);

 printf("inserisci un numero y =");
 scanf("%i",&y);

 printf("inserisci un numero z =");
 scanf("%i",&z);

 if (y-x == z-y)
 {
     y-x == z-y ;
    printf("sono in progressione aritmetica");
 }

 else 
 {
     y-x != z-y ; 
     printf ("non sono in progressione aritmetica");
 }

 return(0);

}
