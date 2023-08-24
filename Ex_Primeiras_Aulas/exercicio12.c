#include<stdio.h>

int main(){


float p1, p2, t1, t2, media1, media2, media_final;
printf("Digite a primeira nota: ");
scanf("%f", &p1);
printf("Digite a nota de t1: ");
scanf("%f", &t1);

printf("Digite a segunda nota:");
scanf("%f", &p2);
printf("Digite a nota de t2: ");
scanf("%f", &t2);

media1 = (p1 * 0.6) + (t1 * 0.4);
media2 = (p2 * 0.7) + (t2 * 0.3);
media_final = (media1 + media2) / 2;

if (media_final >= 6 ){
    printf("Aprovado");
} else if (media_final >= 4 && media_final < 6){
    printf("Aluno de recuperação");
} else{
    printf("Reprovado");
}



    return 0;
}