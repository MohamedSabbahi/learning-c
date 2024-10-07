#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    float Xa,Xb,Ya,Yb;
    float AB;
    printf("veuillez entrez la coordonnee X de A : ");
    scanf("%f", &Xa);
    printf("veuillez entrez la coordonnee Y de A : ");
    scanf("%f", &Ya);
    printf("veuillez entrez la coordonnee X de B : ");
    scanf("%f", &Xb);
    printf("veuillez entrez la coordonnee Y de B : ");
    scanf("%f", &Yb);
    AB = sqrt(pow((Xb-Xa),2) + pow((Yb-Ya),2));
    printf("la distance AB est : %.2f", AB);
    return 0;
}

