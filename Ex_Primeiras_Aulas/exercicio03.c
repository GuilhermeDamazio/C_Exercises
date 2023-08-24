#include <stdio.h>

int main(void){

    float metros, cm;
    printf("Escreva a unidade em metros: ");
    scanf("%f", &metros);

    cm = metros * 100;

    printf("Convertendo o valor de metros para centimetros, temos: %.0fcm", cm);



    return 0 ;
}