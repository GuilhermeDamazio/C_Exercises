#include <stdio.h>
#include <string.h>
#define TAM 15

int main(void) {
  
 char palavra[TAM];
  fgets(palavra, sizeof(palavra), stdin);
  
  printf("A string digitada: %s e o seu tamanho é: %i", palavra, strlen(palavra));
  
  return 0;
}
