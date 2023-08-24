#include <stdio.h>
int main(void){

    float n1, n2, n3, n4, n5, media;

    printf("Digite 5 números: ");
    scanf("%f, %f, %f, %f, %f", &n1, &n2, &n3, &n4, &n5);
    media = (n1 + n2+ n3+ n4+ n5) / 5;

    printf("A média entre os números é: %.1f", media);


    return 0; 
}