#include <stdio.h>

typedef struct Livros {
  int codigo;
  char nome[50];
} Livro;

int n = 3;

void cadastrar(Livro L[], int p) {
  printf("Código e nome:\n");
  scanf("%d", &L[p].codigo);
  scanf("%s", L[p].nome);
  getchar();
}

void imprimir(Livro *L, int cd) {
  for (int i = 0; i < n; i++) {
    if (L[i].codigo == cd)
      printf("%d - %s\n", L[i].codigo, L[i].nome);
  }
}

int main(void) {
  Livro B[n], H[n], E[n];
  int b = 0, h = 0, e = 0;
  char area;
  while (b < n && e < n && h < n) {
    printf("Area:\n");
    scanf("%c", &area);
    getchar();
    switch (area) {
    case 'b':
      cadastrar(B, b++);
      break;
    case 'e':
      cadastrar(E, e++);
      break;
    case 'h':
      cadastrar(H, h++);
      break;
    default:
      printf("Área inválida\n");
      break;
    }
  }
  printf("Pesquisa area");
  scanf("%c", &area);
  int codigo;
  printf("Pesquisa codigo");
  scanf("%d", &codigo);
  getchar();
  switch (area) {
  case 'b':
    imprimir(B, codigo);
    break;
  case 'e':
    imprimir(E, codigo);
    break;
  case 'h':
    imprimir(H, codigo);
    break;
  default:
    printf("Área inválida\n");
    break;
  }
}
