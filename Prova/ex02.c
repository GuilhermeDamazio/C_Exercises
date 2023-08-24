
#include <stdio.h>

int main() {
    int n = 0, contador, valor, soma=0;
    float media;
    printf("Entre com o valor de n: ");
    scanf("%d", &n);

    contador = n; // Variável para controlar o número de vezes que o valor será exibido

    while (contador >= 1) {
        printf("Digite o %d° valor: ", contador);
        scanf("%d", &valor);
        soma = soma + valor;
       
        contador--;
    }

    media = soma / n;

    printf("A média dos valores é: %.2f", media);

    return 0;
}
