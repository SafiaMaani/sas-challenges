#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom [15] ;
    char prenom [15] ;
    char genre[5] ;
    int age ;
    int numtel ;

    printf("entrer votre nom\t") ; //l'utilisateur va entrer son nom qui ne deppasse pas 15 car
    scanf("%s",&nom);
    printf("entrer votre prenom\t") ; //l'utilisateur va entrer son prenom qui ne deppasse pas 15 car
    scanf("%s",&prenom);
    printf("entrer votre genre\t") ; //l'utilisateur doit ecrire son genre
    scanf("%s",&genre);
    printf("entrer votre age:\t") ; //l'utilisateur doit entrer son nom
    scanf("%d",&age) ;
    printf("entrer votre numero tel:\t") ; //l'utilisateur doit entrer son num telephone
    scanf("%d",&numtel) ;

    return 0;
}
