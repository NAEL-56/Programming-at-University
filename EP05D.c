#include <stdio.h>

int main()
{
	int Idade, IdadeMedF=0, IdadeMedM=0, Homens=0, Mulheres=0;
	float Salario, SalarioMedF=0, SalarioMedM=0;
	char Sexo, Continuar;

	do{
		scanf(" %c %d %f %c", &Sexo, &Idade, &Salario, &Continuar);
		
		if(Sexo == 'M' || Sexo == 'm'){
			Homens++;
			IdadeMedM += Idade;
			SalarioMedM += Salario;
		}
		
		if(Sexo == 'F' || Sexo == 'f'){
			Mulheres++;
			IdadeMedF += Idade;
			SalarioMedF += Salario;
		}
	}while(Continuar != 'N' && Continuar != 'n');

	if(Homens){
		IdadeMedM /= Homens;
		SalarioMedM /= Homens;
		printf("\nM %d %.2f", IdadeMedM, SalarioMedM);
	}
	if(Mulheres){
		IdadeMedF /= Mulheres;
		SalarioMedF /= Mulheres;
		printf("\nF %d %.2f", IdadeMedF, SalarioMedF);	
	}
	printf("\n");

	return 0;
}
