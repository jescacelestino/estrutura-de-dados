/* Cálculo do volume de uma esfera (4x3 *pi *r³) */

#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(){
    float raio;                                     // declaração de variável
    float vol;                                      // declaração de variável
    printf("Digite o raio da esfera: ");            // solicita ao usuário o raio da esfera
    scanf("%f", &raio);                             // armazena o raio digitado pelo usuário em raio
    vol = (4.0/3.0) * PI * pow(raio, 3);            // calcula o volume da esfera
    printf("O volume da esfera é: %.2f\n", vol);    // exibe o volume da esfera
}