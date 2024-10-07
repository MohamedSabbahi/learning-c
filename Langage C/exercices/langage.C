#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    printf("veuillez entrez la valeur de x : ");
    int x;
    scanf("%d", &x);
    printf("X = %d\n",x);
    float a,b;
    printf("veuillez entrez la valeur de a et b : ");
    scanf("%f%f" , &a,&b);
    printf("A = %.2f, B = %.2f\n", a,b);
    printf("A + B = %.2f", a+b);
}