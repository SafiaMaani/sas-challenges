#include <stdio.h>
#include <math.h>


int main ()
{
    float note;

    printf("vueillez entrer votre note\n");
    scanf("%f",&note);
    if (note<0 || note > 20)
    {
        printf("error");
    }

    else if (note<10)
    {
        printf("vous etes recale\n");
    }
    else if (10<=note && note<12)
    {
        printf("mention passable\n");
    }
    else if (12<=note && note<14)
    {
        printf("mention assez bien\n");
    }
        else if(14<=note && note<16)
    {
        printf("mention bien\n");
    }
    else
    {
        printf("mention tres bien");
    }


    return 0;
}
