#include <stdio.h>
#include <string.h>

int main(void) {
  char vet1[10] = "cafe";
  char vet2[10] = "abacate";
  char aux[10];

  strcpy(aux, vet1);
  strcpy(vet1, vet2);
  strcpy(vet2, aux);

fgets(vet1, sizeof(vet1), stdin);
fgets(vet2, sizeof(vet2), stdin);
  
if(strcmp(vet1, vet2) != 0){
  strcpy(aux, vet1);
  strcpy(vet1, vet2);
  strcpy(vet2, aux);
}

  
  
   
  printf("%s ", vet1);
  printf("%s", aux);
  
  
 
  
  return 0;
}