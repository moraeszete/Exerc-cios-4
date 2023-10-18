#include <stdio.h>

void backSpace(char frase[], char frase2[])
{
    if (frase[0] < frase2[0])
    {
        printf("%s\n", frase);
    }
    else
    {
        printf("%s\n", frase2);
    }
}

int main()
{
    char frase[46];
    char frase2[46];

    printf("Escreva duas palavras!\n");

    printf("Primeira: ");
    fgets(frase, 45, stdin);

    printf("Segunda: ");
    fgets(frase2, 45, stdin);

    backSpace(frase, frase2);

    return 0;
}