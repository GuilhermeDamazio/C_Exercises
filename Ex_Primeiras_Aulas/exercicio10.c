#include <stdio.h>

int main(){

float n1, n2, n3;

printf("Digite três números: ");
scanf("%f, %f, %f", &n1, &n2, &n3);

if(n1 > n2  && n2 > n3){
    printf("%.0f, %.0f, %.0f", n3, n2, n1);
}else if (n1 > n2 && n3 > n2 && n3 < n1 ){
    printf("%.0f , %.0f , %.0f", n2, n3, n1);
}else if (n1 < n2 && n1> n3){
    printf("%.0f , %0.f , %0.f", n3, n1, n2 );
}else if (n1 < n2 && n1 < n3 &&  n2 > n3){
    printf("%0.f , %0.f , %0.f", n1, n3, n2);
}else if(n3 > n1 && n1 > n2 && n3 > n2){
    printf("%.0f, %0.f, %0.f", n2, n1, n3 );
}else if(n1 < n3 && n2 > n1 &&  n3 > n2){
    printf("%.0f, %.0f, %.0f", n1, n2, n3);
} else printf("Os números são iguais");


    return 0;
}