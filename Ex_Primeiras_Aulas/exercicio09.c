#include<stdio.h>

int main(){

float resp, certa;

printf("Qual o valor da conta \n 7+3? ");
scanf("%f", &resp);

certa = 10;

if (resp == certa){
    printf("Resposta certa!");
} else {
    printf("Resposta errada! Tente novamente.");
}
    return 0;
}