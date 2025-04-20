#include <stdio.h>

int main()
{
	unsigned int input, biggest =0;
	
	printf("Digite numeros naturais que o programa ira dizer o maior. Digite \"0\" para ver a resposta: \n\n");
	scanf ("%d", &input);
	
	do{
		scanf ("%d", &input);
		if(input>biggest) biggest = input;
	}while(input);
	
	printf("\nMaior numero digitado: %d", biggest);
	printf("\n");
	
	return 0;
}
