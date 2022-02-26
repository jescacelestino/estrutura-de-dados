#include <stdio.h>
#include <string.h>

int main() {

    int operacao;
    float primeiroValor;
    float segundoValor;

    printf("\nEscolha uma operação: \n|1- Adição|2- Subtração|3- Divisão|4- Multiplicação:\n");
    scanf("%i", &operacao);
    
    printf("\nEscolha o primeiro valor da operação: ");
    scanf("%f", &primeiroValor);
    
    printf("\nEscolha o segundo valor da operação: ");
    scanf("%f", &segundoValor);
    
    if(operacao == 1) {
        printf("\nO resultado da operação é: %.2f", primeiroValor + segundoValor);
    } else if(operacao == 2) {
        printf("\nO resultado da operação é: %.2f", primeiroValor - segundoValor);
    } else if(operacao == 3) {
        printf("\nO resultado da operação é: %.2f", primeiroValor / segundoValor);
    } else if(operacao == 4) {
        printf("\nO resultado da operação é: %.2f", primeiroValor * segundoValor);
    } else {
        printf("\nOperação inválida!");
    }
}