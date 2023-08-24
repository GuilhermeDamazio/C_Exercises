#include <stdio.h>

int main(){

int n1;

printf("Digite um número: ");
scanf("%d", &n1);

if(n1 % 2 == 0){
 printf("%d é par", n1);

} else{
    printf("%d é ímpar.", n1);
}
}