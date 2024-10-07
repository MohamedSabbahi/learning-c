#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    int produits_vendus;
    float prix_vente , PA ;
    printf("programme qui calcule le proft d'affaire \n");
    printf("veuillez entrez la quantite de produits  vendus : ");
    scanf("%d", &produits_vendus);
    printf("veuillez entrez la prix de vente : ");
    scanf("%f", &prix_vente);
    PA = prix_vente * produits_vendus;
    printf("Le profit d'affaire : %.2f ", PA);
    return 0;
}