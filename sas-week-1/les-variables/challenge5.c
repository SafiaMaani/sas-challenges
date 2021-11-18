#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int cel, fah;
	
	printf("entrer la temperature en Fahrenheit\t");
	scanf("%d",&fah);
	
	cel = (fah-32)/1.8;
	
	printf("la temperature en celsius est : %d\t",cel);
}
