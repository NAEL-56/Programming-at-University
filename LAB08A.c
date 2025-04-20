#include <stdio.h>
#include <string.h>

int main()
{
	int i=0, n=0;
	char palavra[24], letra;
	
	printf("Digite uma palavra de ate 24 letras: ");
	gets(palavra);
	
	printf("\nAgora digite uma letra: ");
	scanf(" %c", &letra);
	
	while(palavra[i]!='\0') if(palavra[i++] == letra) n++;
	
	printf("\nA letra %c aparece %d vezes em \"%s\".\n", letra, n, palavra);

	return 0;
}
