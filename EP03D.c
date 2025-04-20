#include <stdio.h>

int main()
{
	float altura, peso;
	
	printf("Digite a altura em metros:\t");
	scanf("%f", &altura);
	
	printf("Digite o peso em quilogramas:\t");
	scanf("%f", &peso);
	
	peso = peso / (altura*altura);
	
	printf("\nIMC: %.2f\t", peso);
	
	if(peso < 17) printf("Muito abaixo do peso");
	else	if(peso < 18.5) printf("Abaixo do peso");
			else	if(peso < 25) printf("Peso normal");
					else	if(peso < 30) printf("Acima do peso");
							else	if(peso < 35) printf("Obesidade I");
									else	if(peso < 40) printf("Obesidade II (severa)");
											else printf("Obesidade III (morbida)");
	
	return 0;
}
