#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    float A,B,S,P,Df,Dv;
    printf("Enter the first number: ");
    scanf("%f",&A);
    printf("Enter the second number: ");
    scanf("%f",&B);
    S=A+B;
    P=A*B;
    Df=A-B;
    Dv=A/B;
    printf("The sum is: %.2f\n",S);
    printf("The Product is: %.2f\n",P);
    printf("The diffrence is: %.2f\n",Df);
    printf("The division is: %.2f\n",Dv);
}