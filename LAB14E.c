#include <stdio.h>

void main(){
	FILE *arq;
	char texto[51];
	int i=0;
	
	printf("Digite o texto desejado (ate 50 caracteres):\n\n");
	gets(texto);
	
	arq = fopen("teste.txt", "w");	//o material � claro sobre "a" gerar um novo arquivo,
									//aprendi que o "w" tamb�m o faz atrav�z do relat�rio
	for(;texto[i]!='\0';i++){		//e mudei porque nunca sei por que voc�s me descontam
		fputc(texto[i], arq);		//pontos. Meus programas sempre funcionam, ent�o eu
		fputc('\n', arq);			//ao menos queria comentarios sobre os erros. Grato.
	}
	
	fclose(arq);
}
