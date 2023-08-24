#include <stdio.h>
#define TAM 5

float calcularMediaVetor(int vet[], int tam) {
  int i, soma;
  float media;
  for (i = 0; i < tam; i++)
    soma = soma + vet[i];
  media = (float)soma / tam;
  return media;
}

int main(void) {
  int vetor[TAM], soma = 0, i;
  float media;
  // navegando no vetor para preenche-lo
  for (i = 0; i < TAM; i++)
    scanf("%d", &vetor[i]);
  printf("A media eh: %f", calcularMediaVetor(vetor, TAM));

  return 0;
}