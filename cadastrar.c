# include <stdio.h>








int main(void){

	char nome[11];
	
	int idade;
	
	
	printf("Digite seu nome:");
	scanf("%s",nome);
	
	printf("Digite sua idade:");
	scanf("%d", &idade);
	
	printf("Cadastro realizado com suscesso!\n");
	printf("Seja bem vindo,%s!\n",nome);
	
	
	return 0;




}
