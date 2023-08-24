#include <stdio.h>

typedef struct{
	int dia;
	char mes[10];
	int ano;
} Data;


int main(void) {
	Data d1;
	scanf("%d", &d1.dia);
	__fpurge(stdin);// limpar memoria buffer do teclado
	fgets(d1.mes, sizeof(d1.mes), stdin);
	if(d1.mes[strlen(d1.mes) - 1] == '\n')
		d1.mes[strlen(d1.mes) - 1] = '\0';
	scanf("%d", &d1.ano);
	printf("%d - %s - %d", d1.dia, d1.mes, d1.ano);
  return 0;
}