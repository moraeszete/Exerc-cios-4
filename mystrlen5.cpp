#include <stdio.h>

void convMaiuscula(char frase[])
{
    char frase1[501];

    for (int i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] >= 'a' && frase[i] <= 'z')
        {
            frase1[i] = frase[i] - 32;
        }
    }
    printf("%s", frase1);
}

int main()
{
    char frase[501];

    printf("Escreva um frase:\n");
    fgets(frase, 500, stdin);

    convMaiuscula(frase);
    return 0;
}