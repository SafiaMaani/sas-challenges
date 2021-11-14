#include <stdio.h>	
#include <stdlib.h>	

int main ()
{
	float a,b,c,d,somme,moyenne;
	
	printf("what is the value of a\t");
	scanf("%f",&a);
	
	printf("what is the value of b\t");
	scanf("%f",&b);
	
	printf("what is the value of c\t");
	scanf("%f",&c);
	
	printf("what is the value of d\t");
	scanf("%f",&d);
	
	somme = (a+b+c+d);
	moyenne = somme/4;
	
	printf("la somme est : %.1f\n", somme);
	printf("la moyenne est : %.1f\n", moyenne);
	
	return 0;

}
