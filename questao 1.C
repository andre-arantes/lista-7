#include <stdio.h>
#include <string.h>
/* Dados os seguintes campos de um registro: nome, dia de aniversário e mês de aniversário, desenvolver um algoritmo que mostre em cada um dos meses do ano quem são as pessoas que fazem aniversário, exibir também o dia. Considere um conjunto de 40 pessoas */

typedef struct Agenda {
  int dia;
  int mes;
} Agenda;

typedef struct Pessoa {
  char nome[100];
  Agenda dtanasc;
} Pessoa;

int main(void) {
  int n = 3;
  Pessoa p[n];
  for (int i = 0; i < n; i++) {
    printf("\nDigite seu nome: ");
    scanf("%s", p[i].nome);
    printf("Digite seu dia de nascimento: ");
    scanf("%d", &p[i].dtanasc.dia);
    printf("Digite seu mês de nascimento: ");
    scanf("%d", &p[i].dtanasc.mes);
    getchar();
  }
  int achar = 0;
  for (int m = 1; m <= 12; m++) {
    printf("\nAniversariante do mês %d \n", m);
    for (int i = 0; i < n; i++) {
      if (m == p[i].dtanasc.mes) {
        printf("%s \n", p[i].nome);
        achar = 1;
      }
    }
    if (achar == 0)
      printf("Sem aniversariantes \n");
    achar = 0;
  }
}
