#include <stdio.h>
#include <string.h>

struct aluno {
	int id;
	char nome[10];
	float nota1, nota2, nota3, nota4;
	char situacao[20];
	
} aluno;

float result = 0;
float nota = 0;
int i = 0;

int main() {
	
	printf("\n Digite o ID do aluno: ");
	scanf("%d", &aluno.id);
	
	printf("\n Digite o nome do aluno: ");
	fflush(stdin);
	gets(aluno.nome);
	
	for(i = 1; i <= 4; ++i) {
		printf("\n Digite a %d nota: ", i);	
		scanf("%f", &nota);
		
		switch (i) {
		    case 1:
		       aluno.nota1 = nota;
		    	break;
		    case 2:
		      aluno.nota2 = nota;
		      break;
		    case 3:
		      aluno.nota3 = nota;
		      break;
		    case 4:
		      aluno.nota4 = nota;
		      break;
		}
	}
	printf("\n\n  >>>>> CALCULANDO MEDIA >>>>>");
	result = ((((aluno.nota1 + aluno.nota2)/2) * 0.6) + (aluno.nota3 * 0.2) + (aluno.nota4 * 0.2));
			  
	printf("\n\n NOTA 1: %.2f",  aluno.nota1);
	printf("\n\n NOTA 2: %.2f",  aluno.nota2);
	printf("\n\n NOTA 3: %.2f",  aluno.nota3);
	printf("\n\n NOTA 3: %.2f",  aluno.nota3);
	printf("\n\n NOTA 4: %.2f \n",  aluno.nota4);

	if(result >= 7 ) {
		strcpy(aluno.situacao, "APROVADO!");
		printf("\n ALUNO: %s \n MEDIA: %.2f, \n SITUACAO: %s", aluno.nome, result, aluno.situacao);
	} else if(result <= 5) {
		strcpy(aluno.situacao, "REPROVADO!");
		printf("\n ALUNO: %s \n MEDIA: %.2f, \n SITUACAO: %s", aluno.nome, result, aluno.situacao);
	} else if (result > 5 || result < 7) {
		strcpy(aluno.situacao, "EM EXAME!");
		printf("\n ALUNO: %s \n MEDIA: %.2f, \n SITUACAO: %s", aluno.nome, result, aluno.situacao);
	}			
}


