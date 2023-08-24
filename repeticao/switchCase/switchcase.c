#include <stdio.h>

int main(){
    int opcao, soma;


    printf("Digite as opções do cardápio: ");
    scanf("%d", &opcao);

    
 do
 {

 
 
    switch(opcao){
        case 1:
        printf("Opção 1 - Sanduíche natural - R$ 5,00 \n");
        soma = 5 + opcao;
        break;
        case 2:
        printf("Opção 2 - X-salada - R$ 15,00 \n");
        break;
        soma = 15 + opcao;
        case 3:
        printf("Opção 3 - Refrigerante - R$ 3,50 \n");
        break;
        soma = 3,50 + opcao;
        case 4:
        printf("Opção 4 - Suco - R$ 3,00 \n");
        break;
        soma = 3 + opcao;
        case 5:
        printf("Opção 5 - Sorvete - R$ 9,00 \n");
        break;
        soma = 9 + opcao;
        case 6:
        printf("Finalizar.");
        break;
        default: 
        printf("[ERRO] Opção inválida! \n");
    } 
    printf("Mais alguma coisa?");
    scanf("%d", &opcao);

   


} while (opcao == 1 || opcao == 2 || opcao == 3 || opcao == 4 || opcao == 5 || opcao == 6);





 


 
    return 0;
}