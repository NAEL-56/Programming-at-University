#include <stdio.h>

int main()
{
	int Matricula[5], Abaixo=0, i=0;
	float Nota1[5], Nota2[5], Media[6];
	
	for(; i<5;){
		printf("\nDigite o No. de matricula do aluno %d:\t", i+1);
		scanf("%d", &Matricula[i]);
		
		printf("Digite a primeira nota do aluno %d:\t", i+1);
		scanf("%f", &Nota1[i]);
		
		printf("Digite a segunda nota do aluno %d:\t", i+1);
		scanf("%f", &Nota2[i++]);
	}//Sei que o normal � colocar a incrementa��o na defini��o do for, mas quis testar n�o faz�-lo
	
	system("cls");
	printf("No. Matricula\t     Nota 01\tNota 02\t  Nota Final\n");
	
	for(i=0; i<5;){
		Media[i] = (Nota1[i] + Nota2[i])/2;
		printf("\n%04d\t\t\t%.2f\t%.2f\t\t%.2f", Matricula[i++], Nota1[i], Nota2[i], Media[i]);
	}//Achei interessante que foi necess�rio colocar a incrementa��o na "primeira" vari�vel: parece que ela � lida por �ltimo
	
	for(Media[6]=0; i>0;) Media[6] += Media[--i];//O objetivo da formata��o do meu c�digo foi minimar o n�mero de caraceres para diminuir seu tamanho na Mem�ria
	
	Media[6]/=5;
	printf("\n\nMedia da turma: %.2f", Media[6]);
	
	for(; i<5;) if(Media[i++] < Media[6]) Abaixo++;
	printf("\nAlunos com a nota inferior a media: %d", Abaixo);
	
	printf("\n");

	return 0;
}
