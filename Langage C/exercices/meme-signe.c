#include <stdio.h>
#include <stdlib.h>
int main(){
    int A,B;
    printf("Entrez deux nombres : ");
    scanf("%d %d", &A,&B);
    if (A*B<0){
        printf("les nombres n'on pas le meme signe\n");
    }else 
        printf("les nombres ont le meme signe\n");
    return 0;
}