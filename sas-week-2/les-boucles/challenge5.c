#include<stdio.h>
#include<stdlib.h>
int main()
{
    int resteQuotient,nombre,nombreInverse;
    printf("Donner un entier positif:\n");
    scanf("%d",&nombre);
    nombreInverse=0;
    while(nombre>0)
    {
        resteQuotient = nombre%10;
        nombreInverse = 10*nombreInverse + resteQuotient;
        nombre = nombre/10; 
    }
    printf("l'inverse de l'entier donne en entr�e est %d\n",nombreInverse);
    return 0;
}
