#include <stdio.h>

int main(void){

int vetor[10];
int i, num;

    vetor[0] = 20;
    vetor[1] = 72;
    vetor[2] = 20;
    vetor[3] = 12;
    vetor[4] = 44;
    vetor[5] = 99;
    vetor[6] = 18;
    vetor[7] = 52;
    vetor[8] = 13;
    vetor[9] = 17;


    printf("Digite um número: [0 ou 1]: ");
    scanf("%d", &num);

    while(num !=0 && num!=1){
        printf("[ERRO] Valor inválido. Digite 0 ou 1: ");
        scanf("%d", &num);
    }

    i = 0;

    

    if(num == 0){
        while(i < 10){
            printf("%d \n", vetor[i]);
            i++;

        }
    } else if(num == 1){
        i = 9;
            while(i>=0){
                    printf("%d \n", vetor[i]);
                    i--;
                }
    }
    return 0;
}