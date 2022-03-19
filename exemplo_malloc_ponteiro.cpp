#include <stdio.h>
#include <stdlib.h> //para malloc e o free
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	int *ponteiro; //definindo o ponteiro
	int i, qtde = 0;
	
	printf("\n Digite o n�mero de componentes do vetor: ");
	scanf("%d", &qtde);
	
	ponteiro = (int*) malloc(qtde* sizeof(int));
	//armazenando os dados em um vetor
	
	for(i = 0; i < qtde; i++) {
		printf("\n Digite o valor para a posi��o %d do vetor: ", i + 1);
		scanf("%d", &ponteiro[i]);
	}
	
	//percorrendo o vetor e imprimindo os valores
	printf("\n\n valores do vetor dinamico: ");
	for(i=0; i < qtde ; i++) {
		printf("\n\t %d", ponteiro[i]);
	}
	//liberando o espa�o alocado em mem�ria
	free(ponteiro);
}
