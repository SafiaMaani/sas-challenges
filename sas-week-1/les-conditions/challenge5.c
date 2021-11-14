#include <stdio.h>
#include <math.h>


int main ()
{
    int a,b,c,d,x1,x2;


    printf("entrer a\n");
    scanf("%d",&a);

    printf("entrer b\n");
    scanf("%d",&b);

    printf("entrer c\n");
    scanf("%d",&c);

    d = (pow(b,2))-a*c*4 ;

    if(d<0)
    {
        printf("l'equation n'a pas de solution reelle %d\n", d);
    }
    else if (d == 0)
    {
        x1 = -(b)/(a*2);

        printf("l'equation a une solution reelle %d\n",d);
        printf("la solution d'equation est %f",x1);
    }
    else if (d>0)
    {
        x1 = (-(b) - sqrt(d))/(2*a);
        x2 = (-(b) + sqrt(d))/(2*a);

        printf("l'equation a deux solutions reelles\nle delta est : %d\n", d);
        printf("la premiere solution d'equation est %d\n", x1);
        printf("la premiere solution d'equation est %d", x2);
    }

	return 0;

}
