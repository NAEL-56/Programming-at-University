#include <stdio.h>

void main(){
	FILE *ler, *escrever;
	char nome_texto[25], c;
	int caracter=-1, linhas=1, palavras=1;
	
	while(1){
		printf("Digite o nome de um arquivo de texto (ate 20 caracteres):\n\n");
		gets(nome_texto);
		
		strcat(nome_texto, ".txt");
		
		ler = fopen(nome_texto, "r");
		
		if(ler == NULL){
			printf("\nErro. O arquivo deve estar na mesma pasta que este programa.");
			printf("\nPressione qualquer tecla.\n");
			getch();
			system("cls");
		}
		else break;
	}
	
	do{
		c = getc(ler);
		
		switch(c){
			case '\n':
				linhas++;
			case ' ' :
				palavras++;
				break;
			default :
				caracter++;
		}
	} while(c != EOF);
	
	escrever = fopen("stats.txt", "a");
	
	fprintf(escrever, "Num. de palavras: %d", palavras);
	fprintf(escrever, "\nNum. de linhas: %d", linhas);
	fprintf(escrever, "\nNum. de caracteres: %d\n\n", caracter);

	fclose(escrever);	
	fclose(ler);
}
