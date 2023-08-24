#include <stdio.h>
int main(void){

float vetor[16];
int i;
float aux;

    vetor[0] = 10;
    vetor[1] = 72;
    vetor[2] = 20;
    vetor[3] = 12;
    vetor[4] = 44;
    vetor[5] = 99;
    vetor[6] = 18;
    vetor[7] = 52;
    vetor[8] = 13;
    vetor[9] = 17;
    vetor[10] = 30;
    vetor[11] = 82;
    vetor[12] = 47;
    vetor[13] = 12;
    vetor[14] = 49;
    vetor[15] = 51;
   

         printf("Valores antigos:");
        for(i = 0; i < 16; i++){
             printf(" %.2f \n", vetor[i]);}


        for(i = 0; i < 8; i ++){
            aux =  vetor[i];
            vetor[i] = vetor[i + 8 ];
            vetor[i + 8] = aux;
        }

        printf("\n\nVetor atualizado: \n");
    for (i = 0; i < 16; i++) {
        printf("%.2f \n ", vetor[i]);
    }



    return 0;
}