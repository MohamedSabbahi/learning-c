#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*int main (){
    int X , Y , Z;
    X = 4;
    Y = 4;
    Z = pow(X, Y);
    printf("%d", Z);
    return 0;
}
*/
/*
int main (){
    float X , Y;
    int Z;
    X = 17.2;
    Y = 3.3;
    Z = X / Y;
    printf(" %d", Z);
    return 0;

}
*/
int main (){
    float X,Y,P;
    printf("Veuillez donner les valeurs de X et Y: ");
    scanf("%f %f",&X,&Y);
    P = pow(X,Y);
    printf("Le resultat de X^Y est: %.2f",P);
    return 0;
}
