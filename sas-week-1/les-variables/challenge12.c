#include <stdio.h>


int main ()
{
   int number;

   printf("entrer le nombre\n");
   scanf("%d",&number);

   if (number%2 == 0)
   {
     printf("le nombre %d est pair", number);

   }
   else
   {
       printf("le nombre %d est impair", number);
   }

	return 0;

}
