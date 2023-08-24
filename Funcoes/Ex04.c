#include <stdio.h>
void Verificador(int num){
    if(num % 2 == 0){
        printf("Número é par.");
    } else printf("Número é ímpar");
}

int main(void){

    int num = 4;

    Verificador(num);
    printf("", Verificador);

    return 0;
}