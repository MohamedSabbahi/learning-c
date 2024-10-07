#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    float F;
    printf("Enter the number of items: ");
    scanf("%d", &N);
    if (N <= 10){
        F = N *0.30;
    }else if (N <= 30){
        F = 10 *0.30 + (N-10) * 0.25;
    } else {
        F = 10 *0.30 + (N-10) * 0.25 + (N-30) * 0.2;
    }
    printf("Le montant de la facture est: %.2f DH", F);
    return 0;
}