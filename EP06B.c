#include <stdio.h>

int main()
{
	int N, i=2, soma=1;

	do{ printf("Digite um inteiro maior que zero: ");
	scanf ("%d", &N);
	} while (N<=0);
	
	for(; i<=N/2; i++){ if(N%i==0) soma+=i;
	}
	
	if(soma==N) printf("\n%d e um numero perfeito!", N);
	else printf("\n%d nao e um numero perfeito!", N);
	
	printf("\n");

	return 0;
}
