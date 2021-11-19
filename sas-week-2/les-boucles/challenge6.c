#include <stdio.h>

int main()
{
    int nbr,nbrEntre,compteur,a;
    printf("entrer un interval");
    scanf("%d",&nbrEntre);
    
    for(nbr = 2;nbr <= nbrEntre ;nbr++)
    {
        compteur = 0;
        for(a = 2;a < nbr;a++)
        {
            if(nbr%a == 0)
            {
                compteur++;
                break;
            }
          
        }
          if(compteur == 0 ){
            printf("le nombre %d est  PREMIER\n" , nbr);
        }
       
        
    }
    return 0;
}
