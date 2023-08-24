#include <stdio.h>

int main(){

int n1, n2, n3, n4, soma1, soma2;

printf("Digite o primeiro número: ");
scanf("%d", & n1);


printf("Digite o segundo número: ");
scanf("%d", & n2);


if( n1 < n2){
    printf("[ERRO] O segundo número é maior que o primeiro.");
} else {printf("APROVADO");}


printf("Digite o terceiro número: ");
scanf("%d", & n3);


printf("Digite o quarto número: ");
scanf("%d", & n4);

if(n3 > n4){
    printf("APROVADO");
} else {
    printf("[ERRO] O quarto número é maior que o terceiro.");
}

soma1 = (n1 + n2);
soma2 = (n3 + n4);

if (soma2 < soma1)
{
    printf("ERRO");
} else{
    printf("APROVADO");
}




}