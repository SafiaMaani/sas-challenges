#include <stdio.h>


int main ()
{
   int v1,v2,somme,result;

   printf("entrer V1\n");
   scanf("%d",&v1);

   printf("entrer V2\n");
   scanf("%d",&v2);

   somme = v1 + v2;

   if (v1==v2)
   {
       result = 3*somme;

       printf("le resultat est %d",result);
   }
   else
   {
       result = somme;
       printf("la somme est %d",result);
   }

	return 0;

}
