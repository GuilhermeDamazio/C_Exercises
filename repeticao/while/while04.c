#include <stdio.h>

int main(){

int n,numero, positivos=0;

for(n =1; n<=15; n++){
    printf("Digite o %d° número: ",n);
    scanf("%d",&numero);

    
while(numero ==0){
    printf("[ERRO]NÚMERO NULO! Digite outro valor: ");
    scanf("%d", &numero);}

    if(numero>0){
         positivos++;
    
}



       }

         printf("O total de números positivos digitados foi de: %d número(s)",positivos);

    return 0;
 }

 
