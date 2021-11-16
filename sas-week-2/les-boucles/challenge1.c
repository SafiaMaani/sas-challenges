#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int nombreEntre,nombre = 1,produit;
	
	printf("entrer le nombre\n");
	scanf("%d",&nombreEntre);
	
	for(nombre = 1;nombre<=10;nombre++)	
	{
		produit = nombre * nombreEntre;
		printf("le produit de %d * %d est : %d\n",nombre,nombreEntre,produit);
	}	
	

	
	return 0;
}
