#include <stdio.h>

void main(){
	int i=0, leite_total=0, comida_total=0, vacas_venda=0, leite_venda=0, comida_venda=0;
	
	struct{
		int codigo, leite, alimento, idade;
	} vaca[2000];
	
	for(;i<2000;i++){
		printf("Digite o codigo da nova vaca, ou 0 para contabilizar:\n");
		scanf("%d", &vaca[i].codigo);
		
		if(vaca[i].codigo){
			printf("\nDigite quantos litros de leite essa vaca produz por semana:\n");
			scanf("%d", &vaca[i].leite);
			leite_total += vaca[i].leite;
			
			printf("\nDigite quantos quilos de comida essa vaca consome por semana:\n");
			scanf("%d", &vaca[i].alimento);
			comida_total += vaca[i].alimento;
			
			printf("\nDigite quantos meses de idade essa vaca tem:\n");
			scanf("%d", &vaca[i].idade);
			
			if(vaca[i].idade>59){
				vacas_venda++;
				leite_venda += vaca[i].leite;
				comida_venda += vaca[i].alimento;
			}
			
			printf("\n\n\n");
		}
		else break;
	}
	
	printf("\n\n--------------------------------\n\n");
	
	printf("Litros de leite produzidos mensalmente: %.2f\n\n", leite_total*30./7);
	printf("Alimento consumido mensalmente: %.2f\n\n", comida_total*30./7);
	printf("Quantidade de vacas para venda: %d\n\n", vacas_venda);
	printf("Leite produzido mensalmente pelas vacas para venda: %.2f\n\n", leite_venda*30./7);
	printf("Alimento consumido mensalmente pelas vacas para venda: %.2f\n\n", comida_venda*30./7);
	
}
