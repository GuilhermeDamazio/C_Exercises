

#include <stdio.h>

int main() {
    int opcao, quantidade = 0, produtos, produtoEncontrado = 0;
    float soma = 0.0, preco1 = 5.00, preco2 = 9.90, preco3 = 7.80, preco4 = 8.50, preco5 = 16.90;

    printf("Bem-vindo! Escolha a opção:\n");
    printf("(1) - Chocolate - R$ 5,00\n");
    printf("(2) - Manteiga - R$ 9,90\n");
    printf("(3) - Macarrão Espaguete - R$ 7,80\n");
    printf("(4) - Creme dental - R$ 8,50\n");
    printf("(5) - Sabão em pó - R$ 16,90\n");

    while (!produtoEncontrado) {
        printf("\nEntre com o código do produto (ou 6 para finalizar): ");
        scanf("%d", &opcao);

        if (opcao == 6) {
            printf("Finalizando a compra.\n");
            break;
        }

        printf("Quantos produtos você quer? ");
        scanf("%d", &produtos);

        switch (opcao) {
            case 1:
                printf("1 - Chocolate - R$ 5,00\n");
                soma += preco1 * produtos;
                break;
            case 2:
                printf("2 - Manteiga - R$ 9,90\n");
                soma += preco2 * produtos;
                break;
            case 3:
                printf("3 - Macarrão Espaguete - R$ 7,80\n");
                soma += preco3 * produtos;
                break;
            case 4:
                printf("4 - Creme dental - R$ 8,50\n");
                soma += preco4 * produtos;
                break;
            case 5:
                printf("5 - Sabão em pó - R$ 16,90\n");
                soma += preco5 * produtos;
                break;
            default:
                printf("Código de produto inválido. Por favor, tente novamente.\n");
                break;
        }
    }

    printf("O valor total da compra é: R$ %.2f\n", soma);

    return 0;
}
