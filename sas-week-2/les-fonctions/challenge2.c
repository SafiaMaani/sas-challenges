#include <stdio.h>
#include <stdlib.h>

void swap(int v1 , int v2)
{
	int c;
	c = v1;
	v1 = v2;
	v2 = c;	
	
	printf("After swapping\n");
	printf("V1 = %d\n",v1);
	printf("V2 = %d",v2);
	
	return c;
}

int main()
{
	int v1,v2;
	
	printf("V1 =\t");
	scanf("%d",&v1);
	printf("V2 =\t");
	scanf("%d",&v2);
	

	swap(v1,v2);
	
	return 0;
}
