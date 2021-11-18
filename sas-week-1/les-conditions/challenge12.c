 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>

int main ()
{
    int Xa,Xb,Ya,Yb,Xc,Yc,distanceAB,distanceAC,distanceCB;
    
    printf("Xa = \t");
    scanf("%d",&Xa);
    
    printf("Xb = \t");
    scanf("%d",&Xb);
    
    printf("Xc = \t");
    scanf("%d",&Xc);
    
    printf("Ya = \t");
    scanf("%d",&Ya);
    
    printf("Yb = \t");
    scanf("%d",&Yb);
    
    printf("Yc = \t");
    scanf("%d",&Yc);
    
    distanceAB = sqrt(pow(Xb-Xa,2) + pow(Yb-Ya,2));
    distanceAC = sqrt(pow(Xc-Xa,2) + pow(Yc-Ya,2));
    distanceCB = sqrt(pow(Xb-Xc,2) + pow(Yb-Yc,2));
    
    printf("[AB] = %d\n",distanceAB);
	printf("[AC] = %d\n",distanceAC);
	printf("[CB] = %d\n",distanceCB);
    
    if(distanceAB == (distanceAC + distanceCB))
    {
        printf("le point C appartient au segment AB\n");
        printf("car AB = AC + CB\n");
    }
    else 
    {
    	printf("le point C n_appartient pas au segment AB\n");
    	printf("car AB # AC + CB\n");
	}
	return 0;
}

