#include <stdio.h>

float converterKelvinParaFahrenheit(float temperaturaKelvin) {
    float temperaturaFahrenheit = (temperaturaKelvin - 273.15) * 1.8 + 32;
    return temperaturaFahrenheit;
}

int main(void) {
    float temperaturaKelvin, temperaturaFahrenheit;
    
    printf("Digite a temperatura em Kelvin: ");
    scanf("%f", &temperaturaKelvin);
    
    temperaturaFahrenheit = converterKelvinParaFahrenheit(temperaturaKelvin);
    
    printf("A temperatura em Fahrenheit é: %.2f\n", temperaturaFahrenheit);

    return 0;
}
