#include <stdio.h>

int main(void) {
  //declaração de vetor
  float notas[5];
  int i, soma;

  //atribuindo valores as posições dos vetores
  notas[0] = 9.5;
  notas[1] = 5.6;
  notas[2] = 3.5;
  notas[3] = 1.4;
  notas[4] = 7.5;

  for(i = 0; i<5; i++){
    scanf("%f", &notas[i]);
  }
for(i = 0; i<5; i++){
  printf("%.2f , ", notas[i]);
  soma = soma + notas[i];
}

  for(i = 0; i<5; i++){
    if(notas[i] >=6) {printf("\n Aluno %d APROVADO ", i+1);}
    else printf("Aluno %d reprovado \n", i+1);
    
  }
printf("a média é : %d", soma / 5);
  
  
  /*scanf("%f", &notas[3]);
  printf("%.2f", notas[3]);*/
  return 0;
}