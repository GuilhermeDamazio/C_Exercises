#include <stdio.h>
 #define TAM 5
int main(void){
  
    int vetor[TAM], soma;
    float media;
    for( int  i = 0; i < TAM; i++){
       scanf("%d", &vetor[i]);
       soma = soma + vetor[i]; 
    }
    
    media = soma/TAM;
    printf("A média é: %f", media);

}



