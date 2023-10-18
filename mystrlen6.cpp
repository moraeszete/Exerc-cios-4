#include <stdio.h>

void backSpace(char frase[])
{
    int i = 0, j = 0;

    while (frase[i] != '\0')
    {
        if (frase[i] != ' ')
        {
            frase[j] = frase[i];
            j++;
        }
        i++;
    }

    frase[j] = '\0';
}

int main()
{
    char frase[501];

    printf("Escreva um frase:\n");
    fgets(frase, 500, stdin);

    backSpace(frase);
    printf("%s", frase);
    return 0;
}