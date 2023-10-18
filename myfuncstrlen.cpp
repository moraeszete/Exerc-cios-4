#include <stdio.h>
#include <string.h>

// exemplo passado pelo professor. 


int my_strlen(char texto[]){
	int i = 0;
	while(texto[i] != '\0'){
		i++;
	}
	return i;
}

int main(){
	char frase[500+1];
	printf("Informe uma frase ");
	scanf("%s", frase);
	
	int tamanho = my_strlen(frase);	
	int tamanho2 = strlen(frase);	
	
	printf("A frase %s tem %d\n", frase, tamanho);
	printf("A frase %s tem %d\n", frase, tamanho2);
    
	
	return 0;
}
