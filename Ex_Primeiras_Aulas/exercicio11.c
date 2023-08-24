#include<stdio.h>

int main(){

int matricula, salario, vendas;
float percentual, salarioTot;

    printf("Digite a mátricula: ");
    scanf("%d", &matricula);

    printf("Digite o salário do funcionário: ");
    scanf("%d", &salario);

    printf("Quantas vendas o funcionário fez? ");
    scanf("%d", &vendas);

    printf("Quanto o funcionário ganha por cada venda?");
    scanf("%f", &percentual);

    salarioTot = (vendas * percentual) +  salario ;

    printf("O funcionário %d recebeu no mês: R$%f", matricula, salarioTot);
}