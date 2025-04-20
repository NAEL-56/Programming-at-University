#include <stdio.h>

int main()
{
	float speed;
	
	printf("Digite velocidade em Kph:");
	scanf ("%f", &speed);
	
	printf("\nKph\t\t\tMph\n");
	printf("%.2f\t\t\t%.2f", speed, speed/1.609344);
	
	return 0;
}
