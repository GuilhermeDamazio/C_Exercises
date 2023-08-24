#include <stdio.h>

int main(void){

float valor[10];
int i;

    valor[0] = 10;
    valor[1] = 7;
    valor[2] = 20;
    valor[3] = 12;
    valor[4] = 4;
    valor[5] = 9;
    valor[6] = 1;
    valor[7] = 5;
    valor[8] = 1256;
    valor[9] = 17;

        for(i = 0; i <10; i++){
            printf("%.2f \n", valor[i]);
        }

        printf("\nAgora invertendo a sequência: \n");

        for(i = 9; i>=0; i--){
            printf("%.2f \n", valor[i]);
        }


    return 0;
}