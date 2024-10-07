#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int age;
    char sexe;
    printf("Entrez votre âge: ");
    scanf("%d", &age);
    printf("entrez votre sexe (M/F): ");
    scanf(" %c", &sexe);
    if ((sexe == 'M' && age >= 20) || (sexe == 'F' && age >= 18 && age <= 35))
        printf("l'habitant est imposable");
    else
        printf("l'habitant n'est pas imposable");
    return 0;
}