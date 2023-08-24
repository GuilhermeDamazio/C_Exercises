#include <stdio.h>

int main(void) {
  int contador;

  for(contador = 0 ; contador <10; contador++){
    if( contador % 2 == 1) continue;
    printf("%d \n", contador);}
    

    /* if(num <0) break;
  }
  printf("FIM");*/
  return 0;
}