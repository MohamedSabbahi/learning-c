#include <stdio.h>
#include <stdlib.h>
int main (){
    float A,B;
    printf("Enter two numbers: ");
    scanf("%f %f",&A,&B);
    if(A>B){
        printf("A est le max");
    } else {
        printf("Be est le max");
    }
    return 0;
}