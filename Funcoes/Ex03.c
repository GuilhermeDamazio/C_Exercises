#include <stdio.h>

float Media(int nota1, int nota2, int nota3){
    float media = (nota1 + nota2 + nota3) / 3.0;
    return media;
}
int main(void){

    int i, nota[3];
    float media;

    printf("Digite as notas: ");

    for(i = 0; i < 3; i++ ){
        scanf("%d", &nota[i]);
        
    }

    media = Media(nota[0], nota[1], nota[2]);

    printf("A média é: %.1f", media);




    return 0;
}