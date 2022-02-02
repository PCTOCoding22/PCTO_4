#include <stdio.h>
int main()
{
    float x;
    printf("inserire un numero x: "); 
    scanf("%f", &x);
    char add;
    add= '+';
    char sott;
    sott= '-';
    char molt;
    molt='*';
    char div;
    div='/';
    char op;

    printf("che operazione vuoi fare?");
    scanf("\n%c", &op);
    float y;
    printf("inserire un numero y: "); 
    scanf("%f", &y);
     
    if(op!= add&&op!=sott&&op!=molt&&op!=div)
    {
        printf("error");
        return(-1);
    }
    else if(op== add)
    {
        printf("%f", x+y);
    }
    else if(op==sott)
    {
        printf("%f", x-y);
    }
 else if(op==molt)
    {
        printf("%f", x*y);
    }
 else if(op==div)
    {
        if(y==0)
        {
            printf("error");
            return(-1);
        }
        printf("%f", x/y);
    
    }

return (0);
}


//Andreana_Coacci,Sofia_Celon,Lucrezia_Cerulli,Domenico_curatola,Galgano_briganti