#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int T,H,M,S,R;
    printf("veuillez entrez le temps en secondes: ");
    scanf("%d", &T);
    H = T/3600;
    R = T%3600;
    M = R/60;
    S = R%60;
    printf("%d secondes = %d heures %d minutes %d secondes\n", T, H, M, S);
    return 0;
}
