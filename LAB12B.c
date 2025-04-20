#include <stdio.h>

void PRINT_BIGGER(int *mem0, int corte){ //usar * em declara��es para o computador
    int i=0;                             //saber que esta trabalhando com um endere�o
                                         //de mem�ria. Em declara��es, int *z � o 
    for(;i<15;i++)                       //endere�o z que cont�m um valor inteiro.
        if(mem0[i] > corte)
            printf("%d ", mem0[i]); //vetor com �ndice � considerado valor
}

void main(){                        //caso valor fosse um endere�o, seria declarado
    int i=0, endereco[15], valor;   //*valor. No scanf, "&" n�o seria necess�rio e
                                    //para utilizar seu n�mero, seria usado *valor
    printf("Digite 15 numeros inteiros:\n");

    for(;i<15;i++)
        scanf("%d", &endereco[i]);  //necess�rio "&" para ser visto como endere�o

    fflush(stdin);  //corrige o caso mais de 15 n�meros separados por espacos
    printf("\n\nDigite o valor de corte: ");
    scanf("%d", &valor);

    printf("\n\nOs numeros maiores que o valor de corte sao:\n");
    PRINT_BIGGER(endereco, valor);  //um vetor sem �ndice j� � considerado endere�o
    printf("\n");
}
