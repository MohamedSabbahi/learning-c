#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    float R1,R2,R3;
    float Rser,Rpar;
    printf("entrez les valeur de R1,R2,R3: ");
    scanf("%f %f %f", &R1, &R2, &R3);
    Rser = R1 + R2 + R3;
    Rpar = (R1 * R2 * R3)/(R1*R2+R1*R3+R2*R3);
    printf("Rser = %.2f \n", Rser);
    printf("Rpar = %.2f \n", Rpar);
    return 0;
}