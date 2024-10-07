#include <stdio.h>
#include <stdlib.h>
int main() {
    int a = 2;
    /*for (int i = 0; i < 10 ; i++){
        a = a+i;
    }*/
   int i = 10;
   /*while(i <= 5){
    a = a + 2*i;
    i++;
   }*/
  do {
    a += i;
    i--;
    printf("la valeur de a %d \n", a);
  } while( i >= 5);

    return 0;
}