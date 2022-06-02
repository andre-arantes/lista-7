#include <stdio.h>
/*
Um provedor de acesso à Internet mantém o seguinte cadastro de clientes: código
do cliente, e-mail, número de horas de acesso, página (S-sim ou N-não). Elaborar
um algoritmo que calcule e mostre um relatório contendo o valor a pagar por cada
cliente, sabendo-se que as primeiras 20 horas de acesso é R$35,00 e as horas que
excederam tem o custo de R$2,50 por hora. Para os clientes que têm página,
adicionar R$40,00. Inserir um conjunto de registros (máximo 500).
*/

int n = 3, conta = 0;

typedef struct Cadastro {
  char pagina[1];
  char email[70];
  int codigo;
  int horas;
  float valor;
} Cadastro;

void cliente(Cadastro *c) {
  for (int i = 0; i < n; i++) {
    if (c[i].horas <= 20) {
      c[i].valor += 35;
    }
    if (c[i].horas > 20) {
      c[i].valor = 2.5 * (c[i].horas - 20);
    }
    if (c[i].pagina == 'S') {
      c[i].valor += 40;
    }
  }
}
void registro(Cadastro c[n]) {
  printf("\n\n*******************************");
  for (int i = 0; i < n; i++) {
    printf("\nO valor a ser pago pelo %dº cliente, de código igual a (%d), é %f",i + 1, c[i].codigo, c[i].valor);
  }
}

int main(void) {
  Cadastro c[n];
  for (int i = 0; i < n; i++) {
    printf("\nDigite o seu email: ");
    scanf("%s", c[i].email);
    printf("Digite o seu código de cliente: ");
    scanf("%d", &c[i].codigo);
    printf("Digite o número de horas de acesso: ");
    scanf("%d", &c[i].horas);
    printf("Digite se há página ou não (S ou N): ");
    scanf("%s", c[i].pagina);
    c[i].valor = 0;
    cliente(c);
  }
  registro(c);
}
