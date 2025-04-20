#include <stdio.h>

int main()
{
	unsigned int n;
	
	printf("Digite um inteiro positivo para saber se ele e par ou impar: ");
	scanf ("%d", &n);
	
	if(n%2) printf("\n%d e impar\n", n);
	else printf("\n%d e par\n", n);
	
	return 0;
}
