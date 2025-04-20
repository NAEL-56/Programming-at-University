#include <stdio.h>

void main(){
	int i=0;
	float preco;
	
	struct{
		char nome[50];
		int cavalos;
		float preco;
	} carro[5];

	for(;i<5;i++){
		printf("Digite o nome do carro %d:\n", i+1);
		gets(carro[i].nome);
		
		printf("\nQuantos cavalos de potencia ele tem?\n");
		scanf("%d", &carro[i].cavalos);
		
		printf("\nQual o preco desse carro?\n");
		scanf("%f", &carro[i].preco);
		
		printf("\n--------------------------------\n\n");
		fflush(stdin);
	}
	
	printf("Digite um preco maximo para os carros buscados:\n");
	scanf("%f", &preco);
	
	printf("\nCarros ate esse preco:\n");
	for(i=0;i<5;i++){
		if(carro[i].preco<preco)
			printf("\n%s", carro[i].nome);
	}
}
