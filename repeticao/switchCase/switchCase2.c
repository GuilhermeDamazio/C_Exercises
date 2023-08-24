#include <stdio.h>

int main() {
    // Definindo os produtos individualmente
    int codigo1 = 1, codigo2 = 2, codigo3 = 3, codigo4 = 4, codigo5 = 5;
    char* produto1 = "Chocolate", *produto2 = "Manteiga", *produto3 = "Macarrão Espaguete", *produto4 = "Creme dental", *produto5 = "Sabão em pó";
    float preco1 = 5.00, preco2 = 9.90, preco3 = 7.80, preco4 = 8.50, preco5 = 16.90;

    // Imprimindo a tabela de produtos
    printf("Código - Produto - Preço\n");
    printf("%d - %s - R$ %.2f\n", codigo1, produto1, preco1);
    printf("%d - %s - R$ %.2f\n", codigo2, produto2, preco2);
    printf("%d - %s - R$ %.2f\n", codigo3, produto3, preco3);
    printf("%d - %s - R$ %.2f\n", codigo4, produto4, preco4);
    printf("%d - %s - R$ %.2f\n", codigo5, produto5, preco5);

    int codigoProduto, quantidade;
    float valorTotal = 0.0;
    int produtoEncontrado = 0;

    // Loop para receber o código do produto e a quantidade
    while (!produtoEncontrado) {
        printf("\nEntre com o código do produto: ");
        scanf("%d", &codigoProduto);

        printf("Entre com a quantidade: ");
        scanf("%d", &quantidade);

        // Procurando o produto correspondente ao código
        switch (codigoProduto) {
            case 1:
                valorTotal = preco1 * quantidade;
                produtoEncontrado = 1;
                break;
            case 2:
                valorTotal = preco2 * quantidade;
                produtoEncontrado = 1;
                break;
            case 3:
                valorTotal = preco3 * quantidade;
                produtoEncontrado = 1;
                break;
            case 4:
                valorTotal = preco4 * quantidade;
                produtoEncontrado = 1;
                break;
            case 5:
                valorTotal = preco5 * quantidade;
                produtoEncontrado = 1;
                break;
            default:
                printf("Código de produto inválido. Por favor, tente novamente.\n");
                break;
        }
    }

    // Exibindo o valor total a pagar
    printf("\nTotal a pagar é de R$ %.2f\n", valorTotal);

    return 0;
}



