#include <stdio.h>
int main(void){

    float comida, valorFinal;

    printf("Digite o valor da refeição: ");
    scanf("%f", &comida);

    valorFinal = comida * 1.10;

    printf("O valor da conta é: R$%.2f", valorFinal);

    return 0;
}