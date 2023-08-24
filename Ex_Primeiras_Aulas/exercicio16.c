#include <stdio.h>

int main() {
    int x, y;

    printf("Digite o valor de x (1 a 50): ");
    scanf("%d", &x);

    printf("Digite o valor de y (1 a 50): ");
    scanf("%d", &y);

    if (x < 1 || x > 50 || y < 1 || y > 50) {
        printf("Valores de x e y devem estar entre 1 e 50.\n");
        return 0;
    }

   
    int res1 = (3 * x) * (3 * x) + y * y;
    int res2 = 2 * (x * x) + (5 * y) * (5 * y);
    int res3 = -100 * x + y * y * y;

    if (res1 > res2 && res1 > res3) {
        printf("A função A tem o maior resultado.\n");
    } else if (res2 > res1 && res2 > res3) {
        printf("A função B tem o maior resultado.\n");
    } else if (res3 > res1 && res3 > res2) {
        printf("A função C tem o maior resultado.\n");
    } 

    return 0;
}
