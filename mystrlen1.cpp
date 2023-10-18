#include <stdio.h>

int main()
{
    char vog[5] = {'a', 'e', 'i', 'o', 'u'};
    char frase[501];

    printf("Escreva um frase:\n");
    fgets(frase, 500, stdin);

    int i = 0;
    int contVog = 0;

    while (frase[i] != '\0')
    {
        char caractere= frase[i];
        for(int k=0; k<5 ; k++)
        {
            if (caractere == vog[k])
            {
                contVog++;
                break;
            }
        }
        i++;
    }

    printf("A frase \"%s \" tem %d letras.\nCom %d vogais.", frase, i - 1, contVog);
    return 0;
}