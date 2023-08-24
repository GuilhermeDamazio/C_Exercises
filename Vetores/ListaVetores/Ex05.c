#include <stdio.h>

int main(void){

float valor[7];
float media, maior, menor , soma =0;
int i;
    valor[0] = 10;
    valor[1] = 7;
    valor[2] = 20;
    valor[3] = 12;
    valor[4] = 4;
    valor[5] = 9;
    valor[6] = 12;


    maior = valor[0];
    menor = valor[0];

        for(i = 0; i < 7; i++){
            soma = soma + valor[i];
                if(valor[i] > maior){
                    maior = valor[i];
                } 
                
                if(valor[i] < menor){
                    menor = valor[i];
                }

                

        }

        media = soma / 7;

        printf("a média é: %.2f", media);
        printf("\nO maior número é: %.2f", maior);
        printf("\nO menor número é: %.2f", menor);

    return 0;
}


