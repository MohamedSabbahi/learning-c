#include <stdio.h>
#include <stdlib.h>

int main (){
    int A,B,C;
    printf("entrez la valeur de A : ");
    scanf("%d", &A);
    printf("entrez la valeur de B : ");
    scanf("%d", &B);
    C = A;
    A = B;
    B = C;
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    return 0;
}