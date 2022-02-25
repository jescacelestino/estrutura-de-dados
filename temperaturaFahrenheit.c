/* Programa para converter temperatura de Celsius em Fahrenheit */

#include <stdio.h> 

int main() {
    float cels, fahr;                                               // declaração de variáveis
    printf("Digite a temperatura em graus Celsius: ");              // solicita ao usuário a temperatura em Celsius
    scanf("%f", &cels);                                             // armazena a temperatura digitada pelo usuário em cels
    fahr = 1.8 * cels + 32;                                         // calcula a temperatura em Fahrenheit
    printf("A temperatura em graus Fahrenheit é: %.2f\n", fahr);    // exibe a temperatura em Fahrenheit
}