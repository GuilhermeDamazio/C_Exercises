/*#include <stdio.h>

int main(void){

int vetorC[10], vetorF[10], i;
float F;

for( i = 0; i<10; i++){
    scanf("%d", &vetorC[i]);
}

for( i = 0; i < 10; i++){
    scanf("%d", &vetorF[i]);
}

F = vetorC[i] * 1.8 + 32;

printf("os valores de celsius convertidos em fahreinheit são: F%f", &F);

    return 0;
}*/

#include <stdio.h>
#define TAM 5
int main(void){

    int cel[TAM], fah[TAM];
    
    int i;
    for(i = 0; i < TAM; i++){
        scanf("%d", &cel[i]);
        fah[i] = cel[i] * 1.8 + 32;
    }

    for (i = 0; i < TAM; i++){
        printf(" \n 1fC = %.fF", cel[i], fah[i]);
    }


printf("\n Temperaturas abaixo de 10C: \n");
    for(i = 0; i < TAM; i++){
        if(cel[i] < 10)
        printf("\n %d", i+1);
    }
    return 0;
}