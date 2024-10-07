#include <stdio.h>
#include <stdlib.h>
int main(){
    int date_naissance, age;
    printf("Entrez votre date de naissance : ");
    scanf("%d", &date_naissance);
    age = 2024 - date_naissance;
    printf("Vous aurez alors %d ans\n", age);
}