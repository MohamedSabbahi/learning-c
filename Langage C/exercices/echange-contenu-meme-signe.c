#include <stdio.h>
#include <stdlib.h>

int main() {
    int A,B,C,D;
    printf("Entrez deux nombres : ");
    scanf("%d %d", &A,&B);
    if (A*B<0){
        C = A+B;
        D = A*B;
        A = C;
        B = D;
    } else {
        C = A;
        A = B;
        B = C;
    }
    printf("la valeur de A est %d \n",A);
    printf("la valeur de B est %d",B);
    return 0;
}