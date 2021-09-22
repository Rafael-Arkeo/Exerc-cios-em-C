#include <stdio.h>


char palavra1[11],palavra2[11];



int main()

{

    _Bool comparaStrings(char si[], char s2[]);

    
    printf("Digite uma palavra:");
    scanf("%s", palavra1);

    printf("Digite a segunda palavra:");

    scanf("%s", palavra2);

    printf("%s\a\n%s\n", palavra1, palavra2);

    if (comparaStrings(palavra1, palavra2))
    {
        printf("As strings %s e %s são iguais!\a\n",palavra1,palavra2);
    }
    else
    {
        printf("As strings %s e %s não são iguais!\n",palavra1, palavra2);
    }
    
    

    return 0;

    
    
    


}

_Bool comparaStrings(char s1[], char s2[])
{

    int i = 0;

    while (s1[i] == s2[i]  && s1[i] != '\0' && s2[i]!='\0')
    {
        ++i;
    }

    if (s1[i] == s2[i] && s1[i] == '\0')
    
    {

        return 1;

    }
    else
    {
        return 0;
    }
    
    
    



}
