#include <stdio.h>
#include <stdlib.h>

int main()
{
	int jour,mois,an;
	
	printf("entrer le jour\t");
	scanf("%d",&jour);
	printf("entrer le mois\t");
	scanf("%d",&mois);
	printf("entrer l_an\t");
	scanf("%d",&an);
	
	printf("%d/%d/%d\n",jour,mois,an);
	printf("%d-",jour);
	
	switch (mois)
	{
		case 1:
		printf("Janvier");
		break;
		case 2:
		printf("Fevreir");
		break;
		case 3:
		printf("Mars");
		break;
		case 4:
		printf("Avril");
		break;
		case 5:
		printf("Mai");
		break;
		case 6:
		printf("Juin");
		break;
		case 7:
		printf("Juillet");
		break;
		case 8:
		printf("Aout");
		break;
		case 9:
		printf("Septembre");
		break;
		case 10:
		printf("Octobre");
		break;
		case 11:
		printf("Novembre");
		break;
		case 12:
		printf("Decembre");
		break;
		default: 
		printf("entrer un nombre entre 1 et 12");
		break;
	}
	printf("-%d",an);
	
	return 0;
}
