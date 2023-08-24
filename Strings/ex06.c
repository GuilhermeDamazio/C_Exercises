#include <stdio.h>
#include <string.h>
#define TAM 15

int main(void){
    char vet1[TAM] = "dddddd";
    char vet2[TAM] = "bbbbbb";
    char aux[TAM];

    

    
    if(strcmp(vet1, vet2 ) <= 0){
        strncpy(aux, vet1, TAM);
        
        strncpy(aux, vet2, TAM);

      
    } else {
        strncpy(aux, vet2, TAM);
        strcat(aux, vet1);
    }


    printf("A palavra final é: %s", aux);

    return 0;
}