#include <stdio.h>

int getage(){
	int x;

	do scanf("%d", &x); while(x<5||x>13); //idades entre 4 e 14 são de 5 a 14
	return x;
}

int main(){
	int i=0, idade[10], menor=14, maior=4, media=0;

	printf("Digite 10 idades entre 4 e 14. Idades ate 4 e a partir de 14 serao desconsideradas:\n\n");
	for(;i<10;i++){
		printf("Digite a idade do aluno %d: ",i+1);
		idade[i] = getage();

		if(menor>idade[i]) menor = idade[i];
		if(maior<idade[i]) maior = idade[i];
		media+=idade[i];
	}
	media/=10;

	printf("\nMedia das idades: %d anos. Menor idade: %d anos. Maior idade: %d anos.", media, menor, maior);
}
