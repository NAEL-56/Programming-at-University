#include <stdio.h>

int Substituir(char *text, char ch){
    int i=0, substituicoes=0;
	
	for(;text[i]!='\0'; i++){
		if(text[i]==ch){
			text[i] = '*';
			substituicoes++;
		}
	}
	
	return substituicoes;
}

void main(){
    char texto[450], caractere;
	int n;
    
    printf("Digite um texto de ate 450 caracteres:\n\n");
    gets(texto);
    
    printf("\nDigite um caractere para substituir no texto: ");
    scanf(" %c", &caractere); //getche printa na tela, getch não
    
    n =  Substituir(texto, caractere);
    
    printf("\n--------------------------------\n\n");
    
    if (n==1) printf("Foi feita 1 substituicao:\n\n");
    else printf("Foram feitas %d substituicoes:\n\n", n);
    
    puts(texto);
}
