#include <stdio.h>

int blankS(char frase[])
{
    int i = 0 ;
    int space = 0;

    while (frase[i] != '\0')
    {
    char caratere = frase[i];
        if (caratere == ' ')
        {
            space++;
        }
        i++;
    }
    return space;
}

int main()
{
    char frase[501];

    printf("Escreva um frase:\n");
    fgets(frase, 500, stdin);

    printf("Quantidade de espaços em branco é: %d", blankS(frase));
    return 0;
}