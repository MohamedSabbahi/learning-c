#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float A,B,C,D,E,S,M;
    printf("Donner les 5 nombres : ");
    scanf("%f %f %f %f %f",&A,&B,&C,&D,&E);
    S=A+B+C+D+E;
    M=S/5;
    printf("La somme est : %.2f\n",S);
    printf("Le moyen est : %.2f\n",M);
    return 0;
}