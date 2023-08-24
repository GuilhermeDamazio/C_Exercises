#include<stdio.h>

int main(){

int n1, n2, x;

printf("Digite um valor: ");
scanf("%d", &n1);
printf("Digite outro valor: ");
scanf("%d", &n2);




while(n2 < n1){
    printf("Digite mais um valor: ");
    scanf("%d", &n2);

  

   

}
    while(n2 == n1){printf("Valores iguais. Encerrando... ");
     scanf("%d", &n2);
   /* if (x > n1)
{
    printf("Finalizando...");
}   else if (x=n1)
{ printf("Valores iguais. Finalizando..."); 
}
*/
  } while (n2 > n1) {printf("%d é maior que %d. Finalizando... ", n2, n1);
  break;}



    return 0;
}