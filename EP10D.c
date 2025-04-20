#include <stdio.h>
#include <time.h>>

int Dado(){
	int dado;

	dado = 1 + rand() %6;
	return dado;
}

int main(){
	srand(time(NULL));
	
	int i=0, valor[7] = {0,0,0,0,0,0,0};
	
	for(; i<1000; i++){
		valor[0] = Dado();
		valor[valor[0]]++;
	}

	for(i=1; i<7; i++) printf("Porcentagem de %ds tirados: %.1f%%\n", i, valor[i]/10.);
}
