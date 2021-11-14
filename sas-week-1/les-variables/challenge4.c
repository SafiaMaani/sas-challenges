#include <stdio.h>
#include <stdlib.h>
int main ()
{
	float mile,metre;
	
	printf("entrer la valeur en mile");
	scanf("%f",&mile);
	
	metre = 1609*mile;
	
	printf("la distance en metre est: %f",metre) ;
	
	return 0;
}
