#include <stdio.h>
#include <stdlib.h>
int main(){
    float Rayon, Surface ;
    const  float Pi = 3.14 ;
    printf("veuillez entrer la valeur du rayon du cercle : ") ;
    scanf("%f" , &Rayon ) ;
    Surface = Rayon * Rayon * Pi ;
    printf("l'aire de cercle est : %.2f " , Surface) ;
    return  0 ;
}