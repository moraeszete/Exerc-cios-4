#include <stdio.h>

int main()
{
    char frase[501];
    char carOc;

    printf("Escreva um frase:\n");
    fgets(frase, 500, stdin);

    printf("Digite um caractere para ocorrencia:");
    scanf("%c", &carOc);

    int i = 0;
    int contador = 0;

    while (frase[i] != '\0')
    {
        char caractere = frase[i];
        if (caractere == carOc)
        {
            contador++;
        }
        i++;
    }

    printf("Na frase \"%s\" o caractere '%c' ocorre %d vezes.\n.", frase, carOc, contador);
    return 0;
}