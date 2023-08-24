#include <stdio.h>

int main(void) {

    char str[10];
  fgets(str, 10, stdin);

  printf("A string é: %s", str);

  
  return 0;
}