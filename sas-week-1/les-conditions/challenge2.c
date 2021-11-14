#include <stdio.h>


int main ()
{
   int v1,v2;

   printf("entrer le premier nombre\n");
   scanf("%d",&v1);

   printf("entrer le dexieme nombre\n");
   scanf("%d",&v2);

   if(v1!=v2 || v1<v2)
   {
     int prm;
     prm = v1;
     v1 = v2;
     v2 = prm;

     printf("v1 = %d \nv2 = %d",v1,v2 );

   }
   else
   {
            printf("V1 = V2",v1,v2 );

   }
	return 0;

}
