#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	char Y[3], IP[12];
	
	printf("Informe o prefixo do IP X.Y, com X e Y entre 0 a 255 (inclusivo): ");
	gets(IP);
	
	strcat(IP, ".");
	n = rand() % 256;
	sprintf(Y, "%d", n);
	strcat(IP, Y);
	
	strcat(IP, ".");
	n = rand() % 256;
	sprintf(Y, "%d", n);
	strcat(IP, Y);

	printf("\n\n%s\n", IP);

	return 0;
}
