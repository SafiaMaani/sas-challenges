#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int jour;
	
	printf("choisissez un jour en entrant son emplacement dans la semaine\t");
	scanf("%d",&jour);
	
	switch(jour)
	{
		case 1:
			printf("lundi");
		break;
		case 2:
		    printf("mardi");
		break;
		case 3:
			printf("mercredi");
		break;
		case 4:
			printf("jeudi");
		break;
		case 5:
			printf("vendredi");
		break;
		case 6:
			printf("samedi");
		break;
		case 7:
			printf("dimanche");
		break;	
		default : 
		    printf("svp, veuillez choisir un jour entre de 1 a 7");
		break;    
			
	}
	return 0;
}
