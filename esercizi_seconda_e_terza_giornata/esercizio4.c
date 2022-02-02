#include <stdio.h>

int main ()
{
    int x;
    char paese;
    printf ("inserisci un età");
    scanf ("%i",&x);
    printf ("inserisci un paese");
    if (x>=18) 
    {
        printf ("l'utente ha la patente in Italia\n");
    }
    else 
    {
        if (x>=16) 
        {
            printf ("l'utente ha la patente Islanda\n");
        }
       else 
     {
      if (x>=17)
      {
       printf ("l'utente ha la patente in America\n");
      }
      else 
      {
       if (x>=21) 
        {
            printf ("l'utente ha la patente in Inghilterra\n");
        }
        else 
        {
            printf ("l'utente non ha la patente");
        }
      } 
        } 
}
return 0;        
}