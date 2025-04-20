#include <stdio.h>

int main()
{
	int tipo;
	float quant;
	
	printf("Digite o tipo de ovo da Pascoa desejado:\n");
	printf("Para \"A\" digite 1;\n");
	printf("Para \"B\" digite 2;\n");
	printf("Para \"C\" digite 3;\n");
	scanf ("%d", &tipo);
	
	printf("\nAgora, digite a quantidade desejada: ");
	scanf ("%f", &quant);
	
	switch (tipo)
	{
		case 1:
			printf("\n\nVoce selecionou tipo A\n");
			if(quant>50){
				quant=50;
				printf("Limite ultrapassado! Poderemos fornecer apenas %.f unidades.", quant);
			}
			else printf("Podemos fornecer as %.f unidades!", quant);
			quant *= 12;
			break;
		case 2:
			printf("\n\nVoce selecionou tipo B\n");
			if(quant>30){
				quant=30;
				printf("Limite ultrapassado! Poderemos fornecer apenas %.f unidades.", quant);
			}
			else printf("Podemos fornecer as %d unidades!", quant);
			quant *= 15.5;
			break;
		case 3:
			printf("\n\nVoce selecionou tipo C\n");
			if(quant>20){
				quant=20;
				printf("Limite ultrapassado! Poderemos fornecer apenas %.f unidades.", quant);
			}
			else printf("Podemos fornecer as %.f unidades!", quant);
			quant *= 21.3;	
	}
	printf("\n\nO valor total a ser pago sera R$ %.2f", quant);
	
	return 0;
}
