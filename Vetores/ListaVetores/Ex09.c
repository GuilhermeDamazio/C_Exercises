#include <stdio.h>
int main(void){

int vetor1[10], vetor2[10];
int i;

    for(i = 0; i < 10; i++)
    {  
        printf("Digite um número: ");
        scanf("%d", &vetor1[i]);
    }

    for(i = 0; i < 10; i++)
    {
        if(i % 2 == 0)
        {
            vetor2[i] = vetor1[i] * 5;
        } else vetor2[i] = vetor1[i] + 5;
    }

    printf("Vetor 1: \n");

    for(i = 0; i < 10; i++)
    {
        printf("%d \n", vetor1[i]);
    }

    printf("Vetor 2: \n");

    for(i = 0; i < 10; i++)
    {
        printf("%d \n", vetor2[i]);
    }


    return 0;
}