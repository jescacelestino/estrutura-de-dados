#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


struct no {
    int valor;
    no *proximo;
    
};

no *inicio, *fim;


void filaVazia();
void inserir();
void verifica();
void exibirInicio();
void exibirFim();
void eliminar();
void exibirAll();

int main() {
    int op = 0;
    
    do {
        printf("\n\t\t\t\t\t MENU");
        printf("\n\t\t\t\t\t 0 - ENCERRAR");
        printf("\n\t\t\t\t\t 1 - CRIAR FILA VAZIA");
        printf("\n\t\t\t\t\t 2 - INSERIR NA FILA");
        printf("\n\t\t\t\t\t 3 - VERIFICAR SE A FILA ESTA VAZIA");
        printf("\n\t\t\t\t\t 4 - EXIBIR VALOR DO PRIMEIRO ELEMENTO");
        printf("\n\t\t\t\t\t 5 - EXIBIR VALOR DO ULTIMO ELEMENTO");
        printf("\n\t\t\t\t\t 6 - ELIMINAR O PRIMEIRO ELEMENTO");
        printf("\n\t\t\t\t\t 7 - EXIBIR A FILA INTEIRA");
        printf("\n\t\t\t\t\t QUAL SUA OPCAO? ");
        scanf("%d", &op);
        
        switch(op) {         	
            case 1:
            	filaVazia();
            	printf("\n\t\t\t\t\t  Fila criada com sucesso");
            	getch();
            	system("cls");
            	break;
			case 2:   
				inserir();
				break;			      	
			case 3:
				verifica();
				break;
			case 4:
				exibirInicio();
				break;
			case 5:
				exibirFim();
				break;
			case 6:
				eliminar();
				break;
			case 7:
				exibirAll();
				break;
			default:
				printf("\n\t\t\t\t\t ESCOLHA UMA OPCAO VALIDA");				
				getch();
            	system("cls");
        } 
    }while(op!=0);
}


void filaVazia() {
    // fecha fila vazia
    inicio = fim = NULL;
}

void inserir() {
    int valorDigitado;
    no *novo;
    printf("\n\t\t\t\t\t  Digite um valor: ");
    scanf("%d", &valorDigitado);
    
    novo = (no*)malloc(sizeof(no));
    novo-> valor = valorDigitado;
    novo-> proximo = NULL;
    
    if(inicio == NULL) {
        inicio = fim = novo;
    }
    else{
        fim-> proximo = novo;
        fim = novo;
    }
    printf("\n\t\t\t\t\t  Elemento %d inserido com sucesso", novo->valor);
    getch();
    system("cls");
}

void verifica() {
    if(inicio = NULL){
        printf("\n\t\t\t\t\t  A fila não possui elementos inseridos");
    }
    else {
        printf("\n\t\t\t\t\t  A fila possui elementos");
        getch();
        system("cls");
    }
}

void exibirInicio(){
    printf("\n\t\t\t\t\t  O primeiro elemento e %d", inicio->valor);
    getch();
    system("cls");
}

void exibirFim(){
    printf("\n\t\t\t\t\t  O ultimo elemento e %d", fim->valor);
    getch();
    system("cls");
}

void eliminar() {
    no *aux = inicio;
    
    if(inicio == NULL) {
        printf("\n\t\t\t\t\t  A fila esta vazia");
    }
    else {
        inicio=aux->proximo;
        printf("\n\t\t\t\t\t  Elemento %d excluido com sucesso", aux->valor);
        free(aux);
    }
    getch();
    system("cls");
}

void exibirAll() {
    no *aux=inicio;
    
    while(aux!=NULL) {
        printf("\t %d", aux->valor);
        aux=aux->proximo;
    }
    
    printf("\n\t\t\t\t\t  Nao existem elementos inseridos na fila");
    getch();
    system("cls");
}
