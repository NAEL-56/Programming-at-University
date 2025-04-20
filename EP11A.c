#include <stdio.h>
#include <time.h>

int READ(){
	int opcao;
	
	printf("Escolha uma opcao para o Jan-Ken-Pon:\n");
	printf("\nSelecione ""1"" para pedra;");
	printf("\nSelecione ""2"" para papel;");
	printf("\nSelecione ""3"" para tesoura;\n\n");
	
	printf("Sua jogada: ");
	
	scanf("%d", &opcao);
	
	if(opcao<1 || opcao>3) printf("\nJogada invalida");
	
	return opcao;
}

void PRINT(int Jogada){
	
	switch(Jogada){
		case 1:
			printf("1 -> Pedra");
			break;
		case 2:
			printf("2 -> Papel");
			break;
		case 3: printf("3 -> Tesoura");
	}
}

int RESULT(int User, int PC){
	
	if(User == PC) return 1;
	
	else if(User*PC==2){
		printf("\n\nPapel cobre pedra");
		if(User==1) return 3;
		else return 2;
	}
	
	else if(User*PC==3){
		printf("\n\nPedra amassa tesoura");
		if(User==1) return 2;
		else return 1;
	}
	
	else if(User*PC==6){
		printf("\n\nTesoura corta papel");
		if(User==2) return 3;
		else return 2;
	}
	
	else return 0;
}

void main(){
	srand(time(NULL));
	
	while(1){
		int Player = READ(), Machine = 1 + rand()%3, Winner;
		
		PRINT(Player);
		
		printf("\n\nJogada do computador: ");
		PRINT(Machine);
		
		Winner = RESULT(Player, Machine);
		
		switch(Winner){
			case 1:
				printf("\n\nEmpate;");
				break;
			case 2:
				printf("\n\nVoce venceu!");
				break;
			case 3: printf("\n\nVitoria do computador");
		}
		
		if(Winner==1){
			printf("\n\nDevido ao empate, outra partida sera iniciada. Pressione qualquer tecla para continuar: ");
			getch();
			system("cls");
		}
		else break;
	}
}
