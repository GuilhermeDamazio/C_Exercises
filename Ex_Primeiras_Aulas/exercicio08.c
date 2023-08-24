#include<stdio.h>

int main(){

    float n1, n2;
    printf("Digite um número: ");
    scanf("%f", &n1);
    printf("Digite outro número: ");
    scanf("%f", &n2);

    if(n1 > n2){
        printf("%0.f é maior que %.0f", n1, n2);

    } else if (n1 == n2){
        printf("Os números têm o mesmo valor");

    }
     else {
        printf("%.0f é maior que %.0f", n2, n1);
    }

    return 0;
}