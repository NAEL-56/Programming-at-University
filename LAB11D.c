#include <stdio.h>

void Exibir(int linhas, int colunas, char caractere){
	int i=0, j;
	
	for(;i<linhas;i++){
		for(j=0;j<colunas;j++) printf(" %c", caractere);
		printf("\n");	
	}
}

void main(){
	int N, M;
	char C;
	
	printf("Digite o numero de linhas: ");
	scanf("%d", &N);
	printf("Digite o numero de colunas: ");
	scanf("%d", &M);
	printf("Digite o caractere desejado: ");
	scanf(" %c", &C);
	
	system("cls");
	Exibir(N, M, C);
}
