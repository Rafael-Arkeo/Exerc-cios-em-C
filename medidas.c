# include <stdio.h>


/*Fazer um programa em C que pergunta um valor em metros e imprime o
correspondente em decímetros, centímetros e milímetros.*/

int main()
{
    float metros;
    float centimetros;
    float decimetros;
    float milimetros;

    
    printf("Digite um valor em metros: ");
    scanf("%f",&metros);
    centimetros = metros * 100;
    decimetros = metros * 10;
    milimetros = metros * 1000;

    printf("%0.2f metros equivale a:\n%0.2f decimetros;\n%0.2f centimetros;\n%0.2f milimetros;\n",metros,decimetros,centimetros,milimetros);

    return 0;
}