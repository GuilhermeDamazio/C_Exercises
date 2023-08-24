#include <stdio.h>

int main(void){

    float area, pecas = 4 , valor = 7;

    printf("Digite quantos metros quadrados são a área:");
    scanf("%f", &area);

    pecas = area * pecas;

    printf("Serão usadas %.0f peças", pecas);

    valor = valor * pecas;
    printf("\nO valor total gasto será: R$%.2f", valor);


}