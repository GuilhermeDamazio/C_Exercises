#include<stdio.h>
#define TAM 3

int main(){
int contador;
float  preco, maior=0;



for(contador = 0; contador < TAM; contador ++ ){
    printf("Digite 5 números: ");
    scanf("%f", &preco);
    if(contador == 0 ||preco > maior ) maior = preco;
    

} printf("O maior valor é: %.0f", maior);

    return 0;
}