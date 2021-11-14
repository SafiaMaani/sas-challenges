#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

int main ()
{
	float X1,X2,Y1,Y2;
	
	printf("X1 value\n"); //the user will enter the value of X1
	scanf("%f",&X1);

	printf("X2 value\n"); //the user will enter the value of X2
	scanf("%f",&X2);


	printf("Y1 value\n"); //the user will enter the value of Y1
	scanf("%f",&Y1);

	printf("Y2 value\n"); //the user will enter the value of Y2
	scanf("%f",&Y2);

    float result;	
	result = sqrt(pow(X2-X1,2)+pow(Y2-Y1, 2));
	
	printf("la distance (MN) est : %.2f)", result);
	
	return 0;
	
}
