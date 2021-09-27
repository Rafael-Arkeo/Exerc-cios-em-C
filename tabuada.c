# include <stdio.h>


int main(int argc, char const *argv[])
{
    int i, n;
    


    printf("Digite um número inteiro para ver a sua tabuada: ");
    scanf("%d",&n);


    for ( i = 1; i < 11; i++)
    {
      printf("%d x %d = %d\n",n,i,n*i);
    }
    
    return 0;
}
