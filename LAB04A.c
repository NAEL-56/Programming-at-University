#include <stdio.h>

int main()
{
	int dia;
	
	printf("Digite o dia da semana em numeros de 1 a 7 (Exemplo: 1 = Domingo): ");
	scanf ("%d", &dia);
	
	switch (dia)
	{
		case 1: printf("\n\nDomingo"); break;
		case 2: printf("\n\nSegunda-feira"); break;
		case 3: printf("\n\nTerca-feira"); break;
		case 4: printf("\n\nQuarta-feira"); break;
		case 5: printf("\n\nQuinta-feira"); break;
		case 6: printf("\n\nSexta-feira"); break;
		case 7: printf("\n\nSabado");
	}
	printf("\n");
	
	return 0;
}
