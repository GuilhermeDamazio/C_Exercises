#include <stdio.h>
#include <conio.h>
int main(void){

        char tipo;
        float salario;

        printf("Digite o tipo:");
        tipo = getchar(); /*O getchar pode resolver o problema do espaço do char*/

        printf("Qual o salário: ");
        scanf("%f", &salario);

       
        if( tipo == 'g' || tipo == 'G'){
           
            printf("O salário com reajuste é: R$%.2f", (salario * 1.3));
        }  else if( tipo == 't' || tipo == 'T'){
            
            printf("O salário com reajuste é: R$%.2f",  (salario * 1.5));
        } else if( tipo == 'o' || tipo == 'O'){
            
            printf("O salário com reajuste é: R$%.2f", (salario * 1.2));
        }
        else printf("ERRO");

        


    return 0;
}