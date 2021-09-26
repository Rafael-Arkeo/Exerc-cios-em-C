#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int a,b,s;

int soma(int a, int b)

{
	s = a +  b;
	
	if(s<100){
		printf("%d\n",s);
		return soma(s, b);
	
	}
	
	return s;
	

}


int main()
{
	
	printf("Digite um número:");
	scanf("%d", &a);
	
	printf("Digite um número:");
	scanf("%d", &b);
	
	s = soma(a,b);
	
	
	printf("A soma vale : %d\n", s);

	printf("FIM\n");
	
	
	
	
	return 0;
}
