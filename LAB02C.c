#include <stdio.h>

int main()

{
	float a, b, c, result;
	
	printf ("Digite o valor 1: ");
	scanf ("%f", &a);
	
	printf ("\nDigite o valor 2: ");
	scanf ("%f", &b);
	
	printf ("\nDigite o valor 3: ");
	scanf ("%f", &c);
	
	result = a + b + c;
	printf ("\n\nSoma: %.2f", result);
	
	result = a*b*c;
	printf ("\n\nProduto: %.2f", result);
	
	return 0;
}
