#include <stdio.h>

 int codigo, quantidade;
    float valorTotal = 0.0, valorProduto;
        


int main() {
    // Tabela de produtos e preços
    printf("Tabela de Produtos\n");
   printf("(1) - Chocolate - R$ 5,00\n");
    printf("(2) - Manteiga - R$ 9,90\n");
    printf("(3) - Macarrão Espaguete - R$ 7,80\n");
    printf("(4) - Creme dental - R$ 8,50\n");
    printf("(5) - Sabão em pó - R$ 16,90\n");
;
    printf("Digite um código menor que 1 ou maior que 5 para finalizar.\n\n");


    while (1) {
        printf("Digite o código do produto: ");
        scanf("%d", &codigo);

        
        if (codigo < 1 || codigo > 5) {
            break;
        }

        printf("Digite a quantidade do produto: ");
        scanf("%d", &quantidade);

     
        switch (codigo) {
            case 1:
                valorProduto = 5.0;
                break;
            case 2:
                valorProduto = 9.90;
                break;
            case 3:
                valorProduto = 7.80;
                break;
            case 4:
                valorProduto = 8.50;
            break;
            case 5:
                valorProduto = 16.90;
            break;
            default:
                printf("Código inválido.\n");
                continue;
        }

   
        valorTotal += valorProduto * quantidade;
    }

   
    printf("\nValor total da conta: R$%.2f\n", valorTotal);

    return 0;
}
