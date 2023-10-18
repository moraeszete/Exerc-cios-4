#include <stdio.h>

void revTex(char frase[])
{
    int i = 0;
    int j = 0;
    char inv[501]; // array começa do zero

    while (frase[i] != '\0')
    {
        i++;
    }
    i--; //--> banana = 6 letras 6 espaços - 1 (\0) = 5

    while (i >= 0)
    {
        inv[j] = frase[i];
        i--;// finaliza o loop quando chegar no espaço 0 
        j++;
    }
    inv[j] = '\0';

    printf("%s", inv);
}

int main()
{
    char frase[501];

    printf("Escreva um frase:\n");
    fgets(frase, 500, stdin);

    revTex(frase);
    return 0;
}