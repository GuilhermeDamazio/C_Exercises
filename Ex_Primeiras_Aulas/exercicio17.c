#include <stdio.h> 

int main(void){

    int ano;

    printf("Digite um ano pra saber se ele é bissexto ou não: ");
    scanf("%d", &ano);

    if( ano %4 == 0 && ano %100 !=0){
        printf("%d É um ano bissexto!", ano);
    } else if (ano %4 == 0 && ano % 100 == 0 && ano % 400 == 0){
        printf("%d É um ano bissexto!", ano);
    } else printf("%d Não é um ano bissexto.", ano);

    return 0;
} 