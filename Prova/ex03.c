#include <stdio.h>

int main(){

int x, y, soma =0;

printf("Digite o valor de x: ");
scanf("%d", &x);

printf("Digite o valor de y: ");
scanf("%d", &y);

while( x <= y){
    
     if(x %13 == 0){
    soma = soma + 0;
   } else { soma = soma + x;}
   x++;
}


  

printf("A soma dos valores é: %d", soma);

    return 0;
}