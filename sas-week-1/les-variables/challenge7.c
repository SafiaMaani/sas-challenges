#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int a,b;
	
	printf("entrer la valeur de a\t");
	scanf("%d",&a);
	
	printf("entrer la valeur de b\t");
	scanf("%d",&b);
	
	int c,d,e;
	c = a+b;
	d = a-b;
	e=a*b;
	float f,g;
	f = a/b;
	g = a%b;
	
	printf("la somme est :%d\n",c);
	printf("la diffence est :%d\n",d);
	printf("le produit est :%d\n",e);
	printf("le quotient est :%.2f\n",f);
	printf("le reste du quotient est :%.2f\n",g);
	
	return 0;
}
