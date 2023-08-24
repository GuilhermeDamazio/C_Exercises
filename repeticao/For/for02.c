#include<stdio.h>

int main(){

int n1, contador;

printf("Digite um número: ");
scanf("%d", &n1);
for( contador = 0; contador <=3; contador++){
    
    if(n1 >= 1){printf("%d \n", n1 * 1);
    } else printf("[ERRO] Não é possível usar números negativos!");
}

    return 0;
}