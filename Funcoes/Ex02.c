#include <stdio.h>

float MediaAluno( float nota1, float nota2, float nota3, float peso1, float peso2, float peso3){
    float SomaPeso = peso1 + peso2 + peso3;
    float MediaFinal = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / SomaPeso;
        if(MediaFinal > 6){
            printf("Aluno APROVADO\n");
        } else if( MediaFinal >=4 && MediaFinal < 6){
            printf("Aluno EM RECUPERAÇÃO\n");
        } else printf("Aluno REPROVADO\n");
    return MediaFinal;
    
}

int main(void){

    float nota1, nota2, nota3, peso1, peso2, peso3, media;

    printf("Digite as notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("Digite os respectivos pesos: ");
    scanf("%f %f %f", &peso1, &peso2, &peso3);

    media = MediaAluno(nota1, nota2, nota3, peso1, peso2, peso3);

    printf("A média final é %.1f", media);

    return 0;
}