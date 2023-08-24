#include <stdio.h>
#include <string.h>

int main(){

    int opcao;
    float raio, areaC, lado, areaQ, base, altura, areaT;
    char resp;

    printf("Opções:");
    printf("\n 1- Calcular a área de um círculo; ");
    printf("\n 2- Calcular a área de um quadrado; ");
    printf("\n 3- Calcular a área de um triângulo; ");
    

    while(1){
        printf("\n Escolha sua opção: ");
    scanf("%d", &opcao);

 
        

        switch (opcao)
        {
        case 1 :
            printf("\n Digite o raio do círculo: ");
            scanf("%f", &raio);
            areaC = 3.14 * (raio * raio);
            printf("\nÁrea do círculo = %2.f", areaC);

            break;

        case 2:
            printf("\n Digite o lado do quadrado: ");
            scanf("%f", &lado);
            areaQ = lado * lado;
            printf("\n A área do quadrado = %.2f", areaQ);
           
            break;

        case 3:
            printf("\n Digite a base do triângulo: ");
            scanf("%f", &base);
            printf("\n Digite a altura do triângulo: ");
            scanf("%f", &altura);
            areaT = (base * altura) / 2;
            printf("\n Área do triângulo = %.2f", areaT);
            
            break;
        
        default:
            break;
        }

             printf("\nDeseja repetir?");
            scanf(" %c", &resp);
            
            if(resp == 'n'  || resp =='N'){
            break;
        }

    }

    return 0;
}