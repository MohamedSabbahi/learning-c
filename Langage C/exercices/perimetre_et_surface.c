#include <stdio.h>
#include <stdlib.h>
int main() {
    float longeur,largeur;
    float S,P;
    printf("veuillez entrez la largeur de rectangle : ");
    scanf("%f",&largeur);
    printf("vueillez entrez la longeur de rectangle : ");
    scanf("%f",&longeur);
    S=largeur*longeur;
    P=2*(largeur+longeur);
    printf("la surface du rectangle est : %.2f \n",S);
    printf("le perimetre du rectangle est : %.2f",P);
    return 0;
}