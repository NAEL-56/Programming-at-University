#include <stdio.h>

int main()
{
	int i=0;
	float valor[20];

	for(; i<20; i++) scanf("%f", &valor[i]);
	
	for(i--; i>=0; i--) printf("\n%.2f", valor[i]);	
	
	printf("\n");

	return 0;
}
