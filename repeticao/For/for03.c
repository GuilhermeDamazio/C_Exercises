#include<stdio.h>

int main(){

int n1, contador;

printf("Digite um número de 1 a 50: ");
scanf("%d", &n1);
while (n1 > 50)
    {printf("[ERRO] O número é superior a 50.");
    printf("\n  Digite outro valor: ");
    scanf("%d", &n1);
}

 
 if(n1 <= 0) {printf("[ERRO] O valor deve ser positivo!");
 } 



for(contador = n1; contador >= 1; contador --){
  

    printf("%d \n", contador);
   

    
} 

    return 0;
}

