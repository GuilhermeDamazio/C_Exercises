#include <stdio.h>

int main(){

int opcao, somaAlcool = 0, somaGasolina= 0, somaDiesel = 0;

printf("Menu: [1] Álcool. [2] Gasolina. [3] Diesel. [4] Fim. ");


while(1){

    printf("\n Qual tipo de combustível abastecido: ");
    scanf("%d", &opcao);

    if(opcao == 4){
        break;
    }

switch (opcao)
    {
        case 1: 
            printf("Álcool");
            somaAlcool = somaAlcool + 1;
             break;

        case 2:
             printf("Gasolina");
            somaGasolina = somaGasolina + 1;
            break;

        case 3:
            printf("Diesel");
            somaDiesel = somaDiesel + 1;
            break;

        default:
            printf("[ERRO] OPÇÃO INVÁLIDA!");
            break;
    }
}


printf("\n Total de venda por tipo de combustível: ");
printf("\n Álcool: %d", somaAlcool);
printf("\n Gasolina: %d", somaGasolina);
printf("\n Diesel: %d", somaDiesel);


    return 0;
}