#include <stdio.h>

int main()
{
    int x, y, z;
     printf(" inserisci un numero x:");
     scanf("%i", &x);
     printf(" inserisci un numero y:");
     scanf("%i", &y);
     printf(" inserisci un numero z:");
     scanf("%i", &z);
     if ((x !=y) && (y != z) && (z != x))
     {
         printf("è scaleno");
     }
     else if ((x == y) && (y == z) && (z == x))
     {
         printf ("è equilatero");
     }
     else
     {
         printf ("è isoscele");
     }
     return(0);
}