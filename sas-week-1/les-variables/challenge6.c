#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float fah,cel;
	
	printf("entrer la temperature en fah\t");
	scanf("%f",&fah);
	
	cel=(fah-32)/1.8;
	
	printf("la temperature en cel est : %.2f\t",cel);
	
	
	return 0;
}
