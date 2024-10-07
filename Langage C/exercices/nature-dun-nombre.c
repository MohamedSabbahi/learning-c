#include <stdio.h>
#include <stdlib.h>

int main() {
    int A;
    printf("Entrez un nombre: ");
    scanf("%d", &A);
    if(A>0){
        printf("Ce nombre est positif.\n");
    }else if(A = 0){
        printf("Ce nombre est nul.\n");
    } else{
        printf("Ce nombre est négatif.\n");
    }
}