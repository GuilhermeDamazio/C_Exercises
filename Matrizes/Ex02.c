#include <stdio.h>
#define TAM 10
int main(void){

int  matriz[TAM][TAM];
int linha, coluna;

    for(linha = 0; linha < TAM; linha++){
        for(coluna = 0 ; coluna < TAM; coluna++){
            
                    if(linha == coluna) matriz[linha][coluna] = 1;
      else matriz[linha][coluna] = 0;
      printf("%d", matriz[linha][coluna]); 
                }
                printf("\n");
            }
        

    return 0;
}
