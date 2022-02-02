#include <stdio.h>
int main ()
{
    float x;
    char o;
    float y;
    printf ("digita un numero x: ");
    scanf ("%f", &x);
    printf ("inserisci un operatore o: ");
    scanf ("\n%c", &o);
    if (o!='+' && o!='-' && o!='*' && o!='/')
    {
        printf ("errore");
        return (-1);
    }
    printf ("inserisci un numero y: ");
    scanf ("%f", &y);
    if (o=='+')
    {
        float z;
        z = x + y;
        printf ("il risultato è %f", z);
        return (0);
    }
    if (o=='-')
    {
        float w;
        w = x - y;
        printf ("il risultato è %f", w);
        return (0);
    }
    if (o=='*')
    {
        float v;
        v = x * y;
        printf ("il risultato è %f", v);
        return (0);
    }
    if (o=='/')
    {
        if (y==0)
        {
            printf ("errore, impossibile dividere per zero");
            return (-1);
        }
        float t;
        t = x / y;
        printf ("il risultato è %f", t);
        return (0);
    }
}