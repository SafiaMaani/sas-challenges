#include <stdio.h>


int main ()
{
    char caracter;

    printf("entrer le caracter\n");
    scanf("%c",&caracter);

    if((caracter > 64 && caracter < 91) || (caracter > 96 && caracter < 123)  )
    {
     if(caracter > 64 && caracter < 91)
     {
         printf("majuscule");
     }
     else
     {
         printf("miniscule");
     }

    }
    else
    {
        printf("ce n'est pas une lettre");
    }


    return 0;
}
