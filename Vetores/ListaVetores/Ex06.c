#include <stdio.h>
int main(void){

int vetor[10];
int maior, menor, i, num;

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

    maior = vetor[0];
    menor = vetor[0];

        printf("Os valores são: \n");
        for(i = 0; i < 10; i++){ printf(" %d \n", vetor[i]);
            if( vetor[i] > maior){
                maior = vetor[i];
            } else if (vetor[i] < menor) {
                menor = vetor[i];
            }
        }


        printf("Digite um número[0 ou 1]: ");
        scanf("%d", &num);


        while(num != 1 && num != 0)
        {
             printf("[ERRO] Opção inválida! Digite 0 ou 1: ");
            scanf("%d", &num); 
                        
        }


        

        if(num == 0){
                        printf("O maior número é: %d", maior);
                    } else if(num == 1){
                        printf("\nO menor número é: %d", menor);
                    }
                         
        

    return 0;
}