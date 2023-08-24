#include <stdio.h>

int main(){

    int contador, par, impar;

    contador = 0;
    

    for(contador = 1; contador <= 100;contador++){
 

        if ( contador % 2 ==0){
            printf("%d é par \n ", contador);
        }


       
    }

    for(contador = 1; contador <= 100;contador++){
    

        if (contador % 2 ==1)
        {
             printf("%d é ímpar \n ", contador);
        }
        

    

       
    }
    return 0;
}