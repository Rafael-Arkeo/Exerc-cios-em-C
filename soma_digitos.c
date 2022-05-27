#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/*

{
	Programa para encontrar todas as ocorrencias
	nas quais a soma dos quatro digitosseja igual a 21,
	sendo que cada digito não pode ultrapassar o valor de MAXDIGIT
	EX: MAXDIGIT = 7, 7770 = 21 , 7 + 7 + 7 + 0 = 21
}
 
 */

int verifica_maxdigit(int atualvalue, int maxdigit);

int retorna_soma_valor(int value);



int main(int argc, char** argv)
{
	setlocale(LC_ALL, "PORTUGUESE");
	
	int maxdigit;          // valor máximo do digito
	int valor;             // combinção de digitos.ex:7770 ->7+7+7+0=21
	
	printf("Entre com o valor de MAXDIGIT:");
	scanf("%d", &maxdigit);
	
	if(maxdigit < 6) 
		
	//se o valor máximo do digito for menor que 6 toda
	//combinação é menor que 
	
	{
		printf("null");
	}
	else
	{
		for(valor = 1000; valor < 9999; valor++)
			{
				if(verifica_maxdigit(valor, maxdigit)&& retorna_soma_valor(valor))
				{
					printf("%d\n", valor);
				}
				
			}
	}
	return 0;
}

int verifica_maxdigit(int atualvalue, int maxdigit)/* verifica se algum digito
													ultapassa o valor máximo*/
{
	
	int n = atualvalue;
	int d, i;
	
	for(i = 0; i < 4; i++)
	{
		d = n % 10;
		if(d > maxdigit)
		{
			return 0;
			break;
		}
		n = n / 10;
	}
	
	return 1;
}


int retorna_soma_valor(int valor) // verifica se a soma dos digitos é igual 21
{
	int result = 0;
	int n;
	while(valor > 0)
	{
		n = valor % 10;
		result += n;
		valor = valor / 10;
	}
	if(result == 21)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}