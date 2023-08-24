#include<stdio.h>

int main(){
char tipo, t, g, o;
float salario;

printf("Digite o salário do funcionário: ");
scanf("%f", &salario);

printf("Qual o tipo do funcionário? ");
scanf(" %c", &tipo ); // é necessário usar o espaço antes da porcentagem de char ou você pode usar %s





if (tipo == 'T' || tipo == 't'){printf("o reajuste salárial é de: %.2f", salario + (salario * 1.5));
} else if (tipo == 'G' || tipo == 'g'){printf("o reajuste salárial é  de: %.2f", salario + (salario * 1.3));
} else if(tipo == 'O' || tipo == 'o'){printf("o reajuste salárial é de: %.2f", salario + (salario * 1.2));
} else printf("[ERRO]");
    


    return 0;
}