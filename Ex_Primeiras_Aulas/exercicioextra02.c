#include<stdio.h>

int main (){

int p1, p2, t1, t2;
float pp1, pt1, pp2, pt2, ponto_extra1, ponto_extra2, freq, media_1, media_2, media_final, soma1, soma2;

printf("Digite a primeira nota: ");
scanf("%d", &p1);
printf("Digite a nota da t1: ");
scanf("%d", &t1);


soma1 = pp1 + pt1;

while(soma1 != 1.0){
    printf("Qual o peso de pp1?");
    scanf("%f", &pp1);

    printf("Qual o peso de pt1? ");
    scanf("%f", &pt1);


    if(soma1 != 1.0){
        printf("A soma dos pesos deve ser igual a 1. Por favor, digite os pesos novamente.\n");
    }
}


printf("Quantos pontos extras o aluno conseguiu? ");
scanf("%f", &ponto_extra1);


while( ponto_extra1 > 1 ) {
    printf("[ERRO] Pontos extras vão de 0 a 1,0. Não é possível dar mais do que isso. Digite a nota novamente: ");
    scanf("%f", &ponto_extra1);
}



printf("Digite a segunda nota: ");
scanf("%d", &p2);

printf("Digite a nota da t2: ");
scanf("%d", &t2);


soma2 = pp2 + pt2;

while(soma2 != 1.0){
    printf("Qual o peso de pp1?");
    scanf("%f", &pp2);

    printf("Qual o peso de pt1? ");
    scanf("%f", &pt2);


    if(soma2 != 1.0){
        printf("A soma dos pesos deve ser igual a 1. Por favor, digite os pesos novamente.\n");
    }
}



printf("Quantos pontos extras o aluno conseguiu? ");
scanf("%f",&ponto_extra2);

while( ponto_extra2 > 1 ) {
    printf("[ERRO] Pontos extras vão de 0 a 1,0. Não é possível dar mais do que isso. Digite a nota novamente: ");
    scanf("%f", &ponto_extra2);
}

printf("Qual a frequência de presença do aluno? ");
scanf("%f", &freq); 
while( freq > 1 ) {
    printf("[ERRO] A frequência vai de 0 a 1. Não é possível mais do que isso. Digite a frequência novamente: ");
    scanf("%f", &freq);
}

media_1 = (p1 * pp1) + (t1 * pt1) + ponto_extra1;
media_2 = (p2 * pp2) + (t2 * pt2) + ponto_extra2;
media_final = (media_1 + media_2) / 2;

if (freq >= 0.75 && media_final >= 6){
    printf("Aluno APROVADO!");
} else if (media_final >= 4 && media_final < 6 && freq >= 0.75){
    printf("Aluno EM RECUPERAÇÃO!");
} else if(media_final <4){
    printf("Aluno REPROVADO!");
} else printf("Aluno REPROVADO POR FALTAS!");






    return 0;
}