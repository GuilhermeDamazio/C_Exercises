#include <stdio.h>

int main() {
       int codigo1, codigo2, codigo3, quantidade1, quantidade2, quantidade3;
    
 
    printf("Tabela de Produtos\n");
    printf("(1) - Chocolate - R$ 5,00\n");
    printf("(2) - Manteiga - R$ 9,90\n");
    printf("(3) - Macarrão Espaguete - R$ 7,80\n");
    printf("(4) - Creme dental - R$ 8,50\n");
    printf("(5) - Sabão em pó - R$ 16,90\n");


    
 

    printf("\nDigite o código do primeiro item: ");
    scanf("%d", &codigo1);
    printf("Digite a quantidade do primeiro item: ");
    scanf("%d", &quantidade1);

    printf("\nDigite o código do segundo item: ");
    scanf("%d", &codigo2);
    printf("Digite a quantidade do segundo item: ");
    scanf("%d", &quantidade2);

    printf("\nDigite o código do terceiro item: ");
    scanf("%d", &codigo3);
    printf("Digite a quantidade do terceiro item: ");
    scanf("%d", &quantidade3);

   


    float valorTotal = 0.0;

    switch (codigo1) {
        case 1:
            valorTotal += quantidade1 * 5.0;
            break;
        case 2:
            valorTotal += quantidade1 * 9.90;
            break;
        case 3:
            valorTotal += quantidade1 * 7.80;
            break;
        case 4:
            valorTotal += quantidade1 * 8.50;
            break;
        case 5:
            valorTotal += quantidade1 * 16.90;
            break;
            
        default:
            printf("Código inválido para o primeiro item.\n");
    }

    switch (codigo2) {
      case 1:
            valorTotal += quantidade2 * 5.0;
            break;
        case 2:
            valorTotal += quantidade2 * 9.90;
            break;
        case 3:
            valorTotal += quantidade2 * 7.80;
            break;
        case 4:
            valorTotal += quantidade2 * 8.50;
            break;
        case 5:
            valorTotal += quantidade2 * 16.90;
            break;
            
        default:
            printf("Código inválido para o primeiro item.\n");
    }

    switch (codigo3) {
       case 1:
            valorTotal += quantidade3 * 5.0;
            break;
        case 2:
            valorTotal += quantidade3 * 9.90;
            break;
        case 3:
            valorTotal += quantidade3 * 7.80;
            break;
        case 4:
            valorTotal += quantidade3 * 8.50;
            break;
        case 5:
            valorTotal += quantidade3 * 16.90;
            break;
            
        default:
            printf("Código inválido para o primeiro item.\n");
    }

    // Mostrar o valor da conta a pagar
    printf("\nValor total da conta: R$%.2f\n", valorTotal);

    return 0;
}
