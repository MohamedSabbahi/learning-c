#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int a, b;
    ptintf("entrez la valeur de a: ");
    scanf("%d", &a);
    printf("entrez la valeur de b: ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("la nouvelle valeur de a est : %d\n", a);
    printf("la nouvelle valeur de b est : %d\n", b);
    return 0;
}