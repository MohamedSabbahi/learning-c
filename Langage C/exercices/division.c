#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float A,B;
    printf("etrez le dividende : ");
    scanf("%f",&A);
    printf("entrez le diviseur : ");
    scanf("%f",&B);
    if (B == 0){
        printf("division par zero impossible");
    } else {
        printf("le resultat est : %.2f", A/B);
    }
    return 0;
}