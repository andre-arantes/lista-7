#include <stdio.h>
#include <string.h>
/* Uma pessoa cadastrou um conjunto de 15 registros contendo o nome da loja, telefone e preço de um eletrodoméstico. Desenvolver um algoritmo que permita exibir qual foi a média dos preços cadastrados e uma relação contendo o nome e o telefone das lojas cujo preço estava abaixo da média. */

int n = 3;
typedef struct Loja {
  char nome [100];
  int telefone;
  int preco;
} Loja;

void media (Loja l[n]) {
  int soma = 0, m = 0;
  for (int i = 0; i<n; i++) {
    soma += l[i].preco;
  }
  m = soma / n;
  printf("A media dos preços é igual a: %d \n", m);
  printf("*******************************************");
  printf("\n");
  printf("Dados das lojas que estão abaixo da média: \n");
 for (int i = 0; i < n; i++) {
  if (m > l[i].preco) 
   printf("Nome da loja: %s \nNúmero da loja: %d\n", l[i].nome, l[i].telefone);
}
  }

int main(void) {
  Loja v[n];
  for (int i = 0; i<n; i++) {
    printf("\n");
    printf("Digite o nome da sua loja: ");
    scanf("%s", v[i].nome);
    printf("Digite o telefone da sua loja: ");
    scanf("%d", &v[i].telefone);
    printf("Digite o preco do eletrodomestico da sua loja: \n");
    scanf("%d", &v[i].preco);   
    }
  media(v);
}
