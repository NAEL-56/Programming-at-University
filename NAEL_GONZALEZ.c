#include <stdio.h>

    struct livro{
        char nome[31];
        int id;
    };

    struct a{
        char nome[51];
        int id;
        struct livro retirados[5];
    } aluno[3];

void Ler_dados(struct a aluno[3]){
    int i=0, j;

        for(; i<3; i++){
            printf("Digite o nome do aluno %d:\n", i+1);
            gets(aluno[i].nome);
            printf("\nDigite o ID do aluno %d:\n", i+1);
            scanf("%d", &aluno[i].id);
            fflush(stdin);

            for(j=0; j<5; j++){
                printf("\nDigite o nome do livro retirado %d:\n", j+1);
                gets(aluno[i].retirados[j].nome);
                printf("\nDigite o ID do livro retirado %d:\n", j+1);
                scanf("%d", &aluno[i].retirados[j].id);
                fflush(stdin);
            }
            system("cls");
    }
}

void main(){

    FILE *arq;
    int i=0, j;

    Ler_dados(aluno);

    arq = fopen("biblioteca.txt", "w");

    for(; i<3; i++){
        fprintf(arq, "Aluno %d: %s\n", i+1, aluno[i].nome);
        fprintf(arq, "ID Aluno %d: %d", i+1, aluno[i].id);

        for(j=0; j<5; j++){
            fprintf(arq, "\nLivro %d: %s\n", j+1, aluno[i].retirados[j].nome);
            fprintf(arq, "ID Livro %d: %d", j+1, aluno[i].retirados[j].id);
        }

        if(i<2) fprintf(arq, "\n\n");
    }

    fclose(arq);
    
    printf("Arquivo biblioteca.txt atualizado.\n");
}
