#include <stdio.h>

void exibirMensagem(){
  printf("Eu amo programar! \n");
} /*Essa parte do topo se chame "Implementação da Função"*/

void efetuarSoma(){
  int a, b;
  scanf("%d %d", &a, &b);
  printf("Soma: %d", a + b);
}

void efetuarSubtracao(int a, int b){
  printf("Subtração: %d", a-b);
}

int efetuarMultiplicacao(int a, int b){
  return a * b;
}

int main(void) {



  
  int a, b, resultado;
  scanf("%d %d", &a, &b);

  /*exibirMensagem();*/ /*Chamada de Função*/
/*  efetuarSoma();*/
 // efetuarSubtracao(a, b);//
  resultado = efetuarMultiplicacao(a, b);
  printf("Multiplicação %d \n", resultado);
  return 0;
}