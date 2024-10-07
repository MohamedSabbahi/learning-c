#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float R,V;
    const float Pi = 3.14;
    printf("enrez le rayon du sphere: ");
    scanf("%f",&R);
    V = (4/3)*Pi*pow(R,3);
    printf("le volume du sphere est : %.2f",V);
    return 0;
}