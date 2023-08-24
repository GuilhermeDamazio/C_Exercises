#include<stdio.h>

int main(){

int n1;
printf("Digite um valor: ");
scanf("%d", &n1);

while(n1 % 2 == 0)
{printf("O número %d é par. Digite outro número: ", n1);


scanf("%d", &n1);
}

if (n1 % 2 == 1){printf("O número %d é impar. \n Finalizando...", n1);}




    return 0;
}