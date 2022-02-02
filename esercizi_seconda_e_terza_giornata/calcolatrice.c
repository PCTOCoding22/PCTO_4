#include <stdio.h>

float main ()
{
    float x;
    float y;
    char oper;
    printf("inserisci il primo numero: ");
    scanf("%f", &x);
    printf("inserisci un operatore: ");
    scanf("\n%c", &oper);
    printf("inserisci il secondo numero: ");
    scanf("%f", &y);
    if (oper != '+' && oper != '-' && oper != '*' && oper != '/')
    {
        printf("errore");
        return(0);
    }
    else if (oper == '+')
    {
        printf("il risultato è %f", x+y);
    }

     else if (oper == '-')
    {
        printf("il risultato è %f", x-y);
    }
     else if (oper == '*')
    {
        printf("il risultato è %f", x*y);
    }
     else if (oper == '/' && x != 0 && y != 0)
    {
        printf("il risultato è %f", x/y);

    }
        else
        {
            printf("errore");
        }
    {
        printf(", grazie per aver usato la calcolatrice cracco\n");
    }
    return(0);


}
//Renato, Michela, Erika, Ludovica, Alice