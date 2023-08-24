#include <stdio.h>

int main(void){
    int n1, n2, soma, subtracao, multiplicacao, divisao;
    
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite mais um número: ");
    scanf("%d", &n2);
    soma = n1 + n2;
    printf("A soma dos valores é: %d", soma);

    printf("\nDigite um número para subtrair: ");
    scanf("%d", &n1);
    printf("Digite mais um número: ");
    scanf("%d", &n2);
    subtracao = n1 - n2;
    printf("A subtração entre os valores resulta em: %d", subtracao);

    printf("\nDigite um número para ser multiplicado: ");
    scanf("%d", &n1);
    printf("Digite o multiplicador: ");
    scanf("%d", &n2);
    multiplicacao = n1 * n2;
    printf("O resultado da multiplicação é: %d", multiplicacao);

    printf("\nDigite um número para ser dividido: ");
    scanf("%d", &n1);
    printf("Digite o número que irá ser o divisor: ");
    scanf("%d", &n2);
    divisao = n1 / n2;
    printf("O resultado da divisão entre os valores é: ", divisao);


    return 0;
}