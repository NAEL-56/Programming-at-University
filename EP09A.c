#include <stdio.h>

int main()
{
	float Nota[6][5], MediaGeral;
	int i=0, j;
	
	printf("Favor expressar numeros decimais usando ponto. Ex: 6.1\n");
	
	for(;i<6;i++){
		printf("\nDigite as notas do %do aluno: ", i+1);
		for(j=0;j<4;j++) scanf("%f", &Nota[i][j]);
	}
	
	for(i=0;i<6;i++) Nota[i][4] = (Nota[i][0] +Nota[i][1] +Nota[i][2] +Nota[i][3]) /4;
	MediaGeral = (Nota[0][4] +Nota[1][4] +Nota[2][4] +Nota[3][4] +Nota[4][4] +Nota[5][4]) /6;
	
	for(i=0,j=0;i<6;i++) if(Nota[i][4] < MediaGeral) j++;
	
	printf("\n\nP1\tP2\tP3\tP4\tMedia");
	for(i=0;i<6;i++) printf("\n%.2f\t%.2f\t%.2f\t%.2f\t%.2f", Nota[i][0], Nota[i][1], Nota[i][2], Nota[i][3], Nota[i][4]);
	
	
	printf("\nMedia da Turma: %.2f", MediaGeral);
	printf("\nNumero dde alunos com notas final inferior a media: %d", j); //Como escrito na questão
	
	return 0;
}
