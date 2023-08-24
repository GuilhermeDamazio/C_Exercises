#include <stdio.h>

int main(void){

    float altura, raio, volume;

    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    printf("Digite o raio do cilindro circular: ");
    scanf("%f", &raio);

    volume = 3.141592 * ( 2 * raio) * altura;

    printf("O volume do cilindro circular é igual a: %.2f", volume);

    return 0;
}