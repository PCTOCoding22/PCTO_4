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
     if((z+y >x) && (x+y >z) && (z+x >y))
     {
         printf("è un triangolo");
     }
     else
     {
         printf("non è un triangolo");
     }
     return(0);
 }