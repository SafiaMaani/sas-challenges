#include <stdio.h>
#include <stdlib.h>

int add(int a,int b)
{
	int somme = a + b;
	return somme;
}

int main ()
{
	int x,y;
	
	printf("entrer un nombre\t");
	scanf("%d",&x);
	printf("entrer un nombre\t");
	scanf("%d",&y);
	
	printf("la somme est : %d", add(x,y));
	
	
	return 0;
}
