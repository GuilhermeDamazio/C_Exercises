#include <stdio.h>
int main(void){

    float cm, metros;
    printf("Digite o valor em centimetros: ");
    scanf("%f", &cm);
    metros = cm / 100;
    printf("Convertendo centimetros para metros, temos: %.0fm", metros);



    return 0;
}