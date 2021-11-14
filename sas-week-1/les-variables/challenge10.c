#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

int main ()
{
	float ray,cir;
	
	printf("entrer le rayon de votre cercle\n");
	scanf("%f",&ray);
	
	cir = 6.28*ray;
	printf("la circonference du cercle est : %.2f",cir);
	
	return 0;
}
