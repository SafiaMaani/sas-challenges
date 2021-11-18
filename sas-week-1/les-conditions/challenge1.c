#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int cel, fah;
	
	printf("entrer la temperature en Fahrenheit\t");
	scanf("%d",&fah);
	
	cel = (fah-32)/1.8;
	
	printf("la temperature en celsius est : %d\n",cel);
	
	if(cel >= 40)
	{
		printf("il fait tres chaud");
	}
	else if ( cel >=25 )
	{
		printf("il fait chaud");
	}
	else if(cel >=10)
	{
		printf("il fait froid");
	}
	else if(cel < 10)
	{
		printf("il fait tres froid");
	}
}
