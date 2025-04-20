#include <stdio.h>

int main()
{
	int Pessoas=1;
	float Peso, Maior=0, Menor, Media=0;
	
	scanf ("%f", &Menor);
	Media += Menor;
	
	for(;Pessoas<10; Pessoas++)
	{
		scanf ("%f", &Peso);
		Media += Peso;
		if(Peso<Menor) Menor = Peso;
		else if (Peso>Maior) Maior = Peso;
	}
	
	Media /= 10;
	printf("\nMedia: %.2f, Maior: %.2f, Menor: %.2f", Media, Maior, Menor);
	
	printf("\n");

	return 0;
}
