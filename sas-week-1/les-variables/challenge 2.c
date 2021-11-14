#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cel; //la variable temperature en Fahrenheit
    float fah; //la variable teperature en Celsius

    printf("entrer la temperature en celsius"); //input
    scanf("%d",&cel);
    fah = (cel*1.8) +32;
    printf("La temperature en Fahrenheit %.2f",fah); //output


    return 0;
}
