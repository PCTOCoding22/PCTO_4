#include <stdio.h>

int main()
{
    char op; 
    float y;
    float x;
    printf ("inserisci un numero x: ");
    scanf ("%f", &x);
    printf ("inserisci un operatore op: ");
    scanf ("\n%c", &op);
    printf ("inserisci un numero y: ");
    scanf ("%f", &y);
    if ((op != '+') && (op != '*') && (op != '/') &&  (op != '-'))
    {
        printf ("errore");
        return (-1);
    }
    if (op == '+')
    {
        printf ("%f",x + y);
        return (0);
    }
    if (op == '-')
    {
        printf ("%f", x - y);
        return (0);
    }
    if (op == '/' && y == 0)
    {
        printf ("errore");
        return (-1);
    }
    else if (op == '/' && y!=0) 
    {
       printf("%f", x / y);
       return (0);
    }
    if (op == '*')
    {
        printf ("%f", x * y);
        return (0);
    }

    return (0);

}



//Barbieri: Gianmarco Baiocchi, Francesca Merlino, Gabriele Kavosh. 