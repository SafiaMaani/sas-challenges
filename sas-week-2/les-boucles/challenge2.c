#include <stdio.h>

int main()
{
    int L, E, S = 1,numL = 1;// L est le nomre de lignes , E est le nombre d'espace ds chq ligne,S le nbr de stars 
    
    printf("entrer le nombre de lignes de votre pyramyde\t");
    scanf("%d",&L);
    
    E = L - numL;  
    numL++;
    
    for(numL=1;numL <= L;numL++)
    {
        for(E = 1; E <= L - numL;E++)
        {
            printf(" ");
        }
        for(S = 1; S <= (2*numL)-1; S++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
