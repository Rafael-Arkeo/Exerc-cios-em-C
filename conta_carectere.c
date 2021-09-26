# include <stdio.h>
# include <stdlib.h>
# include <string.h>


struct conta_caractere
{
    char caractere;
    int quantidade;
};

char letra;

_Bool busca_caracteres(char v, char l); // verifica se determinado caractere existe no vetor


int busca_index(char l, char v); // encontra a posicao do caractere em questão


int main()
{
    struct conta_caractere caracteres[3];
    
    char letra = 'b';
    
    int i,k;
    
    caracteres[0].caractere = 'e';
    caracteres[1].caractere = 'b';
    caracteres[2].caractere = 'c';
    
    
   
   
   
   if(busca_caracteres(caracteres[1].caractere,letra))
   {
   	
   	 printf("Deu certo!\n");
   		
   		
   	
   }
   	
   else
   {
   	
   	printf("Não deu certo!\n");
   		
   	
   }	
   
   
   
    return 0;
}


_Bool busca_caracteres(char v,char l)
{

	if(v == l)
	{
		return 1;
	
	}
	
	else
	{
		return 0;
	}



}

