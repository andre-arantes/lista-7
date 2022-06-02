#include <stdio.h>
#include <string.h>
/* Escreva um programa para cadastrar dois clientes de uma loja. As informações necessárias são: nome, endereço e telefone. Deve ser usada uma estrutura de registro para a construção deste cadastro.*/
int n = 2;

typedef struct Cadastro {
    char nome[20];
    char endereco[50];
    int telefone;
}Cadastro;


int main () {
  Cadastro v[n];
  for (int i = 0; i < n; i++) {
  printf("*************************");
  printf("\n%dº Usuário: \n\n", i+1);
  printf("Olá! Para começar o seu cadastro, digite o seu nome: ");
  scanf("%s", v[i].nome);
  getchar();
  printf("Digite o seu endereço: ");
  scanf("%s", v[i].endereco);
  getchar();
  printf("Digite o seu telefone: ");
  scanf("%d", &v[i].telefone);
  getchar();
  
  }
}
