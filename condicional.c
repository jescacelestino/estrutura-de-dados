#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");                        // seta o idioma para português
    printf("\n\t\t\t\t\t\t Isso é um teste");               // exibe uma mensagem

    int magic;                                              // declaração de variável
    int palpite;

    magic = rand();                                         // gera um número aleatório
    printf("\n\n Adivinhe o numero que estou pensando: ");  // solicita ao usuário que adivinhe o número
    scanf("%d", &palpite);                                  // armazena o número digitado pelo usuário em palpite
    
    if(palpite == magic) {
        printf("\n\n Parabéns, você acertou!");             // exibe uma mensagem caso o usuário acerte
    
    } else {
        printf("\n\n Você errou, o número era %d", magic);  // exibe uma mensagem caso o usuário erre 
    }
}