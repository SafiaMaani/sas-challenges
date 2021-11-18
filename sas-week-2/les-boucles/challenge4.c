#include <stdio.h>
#include <stdlib.h>

int main ()
{	
	int nbr,somme = 0,max = 0;
	
	do{
	printf("Donner un nombre: \t");
	scanf("%d",&nbr);
	
	if(nbr > 0 && nbr<100)
	{
	somme += nbr;// somme = somme + nbr;
	if(max < nbr) 
	max = nbr;
	}
		
	}while(nbr != 0);
	
	printf("la somme est %d\n",somme);
	printf("le max est %d",max);
		
	return 0;
}
