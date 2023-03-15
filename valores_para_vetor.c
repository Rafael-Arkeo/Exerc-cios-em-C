#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	char palavra[50];
	int chave;
	struct lista *proximo;
}lista;
int main(){
    
    lista *vetor;
    vetor = calloc(5,sizeof(lista));
    
    int i,j;
    for(i = 0; i < 5; i++){
    	printf("Palavra:");
    	fgets(vetor[i].palavra,50,stdin);
    	vetor[i].chave = i;
    	if(i < 4){
    		vetor[i].proximo = &vetor[i+1];
    	}
    	else{
    		vetor[i].proximo = (lista *)0;
    	}
    }
    
    printf("\n");
    
    for(j = 0; j < 5; j++){
    	printf("Palavra: %s\n", vetor[j].palavra);
    	if(vetor[j].proximo == 0){
    		printf("FIM\n");
    	}
    	else{
    		printf("Continua...\n");
    	}
    }
	
    
    return 0;
}
