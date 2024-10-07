#include <stdio.h>
#include <stdlib.h>

int main(){
    int age;
    printf("entrez l'age de l'enfant : ");
    scanf("%d", &age);
    if (age >= 6 && age <= 7)
        printf("l'enfant est poussin\n");
    else if (age >= 8 && age <= 9)
        printf("l'enfant est pupille\n");
    else if (age >= 10 && age <= 11)
        printf("l'enfant est Minime\n");
    else
        printf("l'enfant est cadet");
    return 0;
}