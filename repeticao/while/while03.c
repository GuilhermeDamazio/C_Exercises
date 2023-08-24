#include <stdio.h>

int main() {
    float media, mediaTotal = 0.0, menorMedia = 0.0, maiorMedia = 0.0, quantidadeMedias = 0;
   

    printf("Digite as médias dos alunos (digite uma média negativa para encerrar):\n");

    while (1) {
        printf("Média: ");
        scanf("%f", &media);

        if (media < 0) {
            break;
        }

    
        if (media < menorMedia) {
            menorMedia = media;
        }


        if (media > maiorMedia) {
            maiorMedia = media;
        }

        mediaTotal = media+ media;
        quantidadeMedias++;
    }

    if (quantidadeMedias > 0) {
        float mediaGeral = mediaTotal / quantidadeMedias;

     
        printf("Número de médias lidas: %d\n", quantidadeMedias);
        printf("Média geral da turma: %.2f\n", mediaGeral);
        printf("Menor média: %.2f\n", menorMedia);
        printf("Maior média: %.2f\n", maiorMedia);
    } else {
        printf("\nNenhuma média foi lida.\n");
    }

    return 0;
}
