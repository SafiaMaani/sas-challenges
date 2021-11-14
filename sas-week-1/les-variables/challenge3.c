#include <stdio.h>
#include <stdlib.h>

int main()
{
    float metre,mile;

    printf("entrer la distance en metre");
    scanf("%f",&metre);
    
    mile = 1.609*metre;
    
    printf("la distance en mile %.2f", mile);
    return 0;
}
