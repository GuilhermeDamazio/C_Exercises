#include <stdio.h>
int main(void){

    float latao, cobre, zinco;

    printf("Digite quantos kgs de latão serão necessários: ");
    scanf("%f", &latao);

    cobre = latao * 0.70;
    zinco = latao * 0.30;

    printf("Para ter %.1fkg de latão você vai precisar de:\n%.1fkg de cobre\n%.1fkg de zinco",latao, cobre, zinco);

    return 0 ;
}