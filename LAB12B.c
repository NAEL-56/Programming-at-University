#include <stdio.h>

void PRINT_BIGGER(int *mem0, int corte){ //usar * em declarações para o computador
    int i=0;                             //saber que esta trabalhando com um endereço
                                         //de memória. Em declarações, int *z é o 
    for(;i<15;i++)                       //endereço z que contém um valor inteiro.
        if(mem0[i] > corte)
            printf("%d ", mem0[i]); //vetor com índice é considerado valor
}

void main(){                        //caso valor fosse um endereço, seria declarado
    int i=0, endereco[15], valor;   //*valor. No scanf, "&" não seria necessário e
                                    //para utilizar seu número, seria usado *valor
    printf("Digite 15 numeros inteiros:\n");

    for(;i<15;i++)
        scanf("%d", &endereco[i]);  //necessário "&" para ser visto como endereço

    fflush(stdin);  //corrige o caso mais de 15 números separados por espacos
    printf("\n\nDigite o valor de corte: ");
    scanf("%d", &valor);

    printf("\n\nOs numeros maiores que o valor de corte sao:\n");
    PRINT_BIGGER(endereco, valor);  //um vetor sem índice já é considerado endereço
    printf("\n");
}
