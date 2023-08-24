#include <stdio.h>
#include <string.h>
#define TAM 10
int main(void) {
  char tentativas[TAM];
  fgets(tentativas, sizeof(tentativas), stdin);
  if(tentativas[strlen(tentativas)-1] == '\n')
  tentativas[strlen(tentativas) - 1] = '\0';
  if(strcmp(tentativas, "amor") ==0){//SIGNIFICA QUE A STRING É IGUAL
    printf("LOGADO");
  } else{
    printf("Senha INCORRETA!");
  }
  return 0;
}