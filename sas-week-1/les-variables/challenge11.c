#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

int main ()
{
	float longueur,largeur,circonference;
	
	printf("entrer la longueur\n");
	scanf("%f",&longueur);
	
	printf("entrer la largeur\n");
	scanf("%f",&largeur);
	
	circonference = 2*(longueur + largeur);
	
	printf("la circonference du rectangle est : %.2f", circonference);
}
