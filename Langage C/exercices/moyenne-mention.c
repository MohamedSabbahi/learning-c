#include <stdio.h>
#include <stdlib.h>
int main (){
    float n1,n2,n3,M;
    printf("Veuillez entrer les trois notes: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    M = (n1+n2+n3)/3;
    printf("la moyenne est: %.2f\n", M);
    if (M < 10)
        printf("Insuffisant");
    else if (M>=10 && M < 12){
        printf("Vous avez obtenu une mention Passable");
    } else if (M>=12 && M < 14){
        printf("Vous avez obtenu une mention Assez Bien");
    } else if (M>=14 && M < 16){
        printf("Vous avez obtenu une mention Bien");
    } else if (M>=16){
        printf("Vous avez obtenu une mention Très Bien");
    }
    return 0;
}