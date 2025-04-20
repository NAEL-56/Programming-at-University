#include <stdio.h>

int main()
{
	unsigned short int i=0, j, n[3][3], maior[3] = {0,0,0};
	
	printf("Digite a tabela 3x3 com numeros de 1 a 30:\n");
	
	for(;i<3;i++){
		printf("\nDigite os tres numeros da %da linha: ", i+1);
		for(j=0;j<3;j++) scanf("%d", &n[i][j]);
	}
	
	for(i=0;i<3;i++) for(j=0; j<3; j++) if(n[i][j] > maior[j]) maior[j] = n[i][j];

	if(n[0][0]*n[0][1]*n[0][2]*n[1][0]*n[1][1]*n[1][2]*n[2][0]*n[2][1]*n[2][2]){
		
		if(maior[0]>30 || maior[1]>30 || maior[2]>30) printf("\n\nDigite apenas numeros menores que trinta\n\n");
		
		else{
			printf("\n\nMATRIZ ORIGINAL:\n");
			for(i=0;i<3;i++){
				for(j=0;j<3;j++) printf("%d\t", n[i][j]);
				printf("\n");
			}

			printf("\n\nVALORES MAXIMOS DAS COLUNAS:\n%d\t%d\t%d\n", maior[0], maior[1], maior[2]);
		}
	}
	else printf("\n\nDigite apenas numeros maiores que zero\n\n");
	
	return 0;
}
