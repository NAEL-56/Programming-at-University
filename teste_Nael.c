#include <stdio.h>

typedef struct{
 char rua[50];
 int numero;
 char cidade[30];
 long int cep;
}tipo_endereco;

typedef struct{
 int codigo;
 char nome[40], cargo[15];
 int dpto;
 float salario;
 char sexo;
 tipo_endereco endereco;
}funcionario;

void main(funcionario *f, tipo_endereco *end){
 f->endereco.cep = end->cep;
 strcpy(f->endereco.cidade, end->cidade);
 strcpy(f->endereco.rua, end->rua);
 f->endereco.numero = end->numero;
 return;
}
