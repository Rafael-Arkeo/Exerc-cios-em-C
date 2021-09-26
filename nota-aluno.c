# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main()
{

	struct nota_aluno
	{
		char nome[30];
		float nota;

	};

	
	
	float soma = 0, media;

	struct nota_aluno alunos[3];
	
	int posicao, cont = 1;
	
	for(posicao = 0; posicao < 3; posicao ++)
	{
	
		printf("Digite a nome do %d°aluno:",cont);
		scanf("%s",&alunos[posicao].nome);
		printf("Digite a nota do %d° aluno: ",cont);
		scanf("%f",&alunos[posicao].nota);

		soma  = soma + alunos[posicao].nota;
		cont ++;
	}

	int i;
	
	for (i = 0; i < 3; i++)
	{
		printf("Nome:%s\nNota:%0.2f\n",alunos[i].nome,alunos[i].nota);
		
	}
	printf("\n");

	media = (soma / 3);

	printf("%0.2f",media);
	
	
	
	
	
	
	return 0;
	



}
