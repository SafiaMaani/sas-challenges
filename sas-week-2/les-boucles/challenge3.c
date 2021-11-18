#include <stdio.h>

int main()
{
    int nbr,a=2;//a est le nbr sur lequel on va deviser
    
    printf("entrer un nombre");
    scanf("%d",&nbr);
    
    for(a = 2;nbr > a;a++)
    {
    	if(nbr%a == 0)
    	{
    		printf("ce nombre n_est pas un premier");
    		return 0;
		}
    }
    printf("c'est un nombre premier");
    return 0;
}
