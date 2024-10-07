#include <stdio.h>
#include <stdlib.h>

int main() {
    float T;
    printf("veuillez entrez la temperature en degres celsius: ");
    scanf("%f", &T);
    if(T<0){
        printf("L'etat de l'eau est Glace");
    }else if(T>100) {
        printf("L'etat de l'eau est Vapeur");
    }else {
        printf("L'etat de l'eau est Liquid");
    }
}