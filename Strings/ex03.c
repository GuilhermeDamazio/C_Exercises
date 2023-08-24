#include <stdio.h>
#include <string.h>
#include <locale.h>
#define TAM 15
int main(void) {
  setlocale(LC_ALL, "Portuguese");
  char palavra1[TAM] = "olá ";
  char palavra2[TAM] = "mundo";

  strncat(palavra1, "**", sizeof(palavra1) - 1 - strlen(palavra1));
  strncat(palavra1, palavra2, sizeof(palavra1) - 1 - strlen(palavra1));
  
  printf("Palavra final: %s", palavra1);
  return 0;
}