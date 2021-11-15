#include <stdio.h>


{
    int heure1,min1,sec1,heure2,min2,sec2;
    
    printf("entrer heure1\n");
    scanf("%d",&heure1);
    
    printf("entrer min1\n");
    scanf("%d",&min1);

    printf("entrer sec1\n");
    scanf("%d",&sec1);
    
    printf("entrer heure2\n");
    scanf("%d",&heure2);
    
    printf("entrer min2\n");
    scanf("%d",&min2);
    
    printf("entrer sec2\n");
    scanf("%d",&sec2);
    
    if(heure1 == heure2 && min1 == min2 && sec1 == sec2)
    {
        printf("il s_agit du mm instant ",heure1,min1,sec1,heure2,min2,sec2);
    }
    else if (heure1 < heure2 || min1 < min2 || sec1 < sec2)
    {
        printf("le 1er instant vient avant le 2eme",heure1,min1,sec1,heure2,min2,sec2);
    }
    else
    {
        printf("le 2eme instant vient avant le 1er",heure1,min1,sec1,heure2,min2,sec2);
    }
    return 0;
}
