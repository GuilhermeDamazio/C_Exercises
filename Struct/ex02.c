#include <stdio.h>
#include <string.h>

typedef struct
{
	char nome[20];
	int idade;
	float peso;
	float altura;
}Pessoa;

int main(void) {
  Pessoa jose = {"Jose Silva", 25, 85.0, 1.90};
	Pessoa p2;
	fgets(p2.nome, sizeof(p2.nome), stdin);
	if(p2.nome[strlen(p2.nome)-1] == '\n') 
		p2.nome[strlen(p2.nome)-1] = '\0';
	scanf("%d", &p2.idade);
	scanf("%f", &p2.peso);
	scanf("%f", &p2.altura);
	
	printf("O nome da pessoa eh: %s\n", p2.nome);
	printf("A idade da pessoa eh: %d\n", p2.idade);
	printf("O peso da pessoa eh: %f\n", p2.peso);
	printf("A altura da pessoa eh: %f\n", p2.altura);
	
	
  return 0;
}