#include <stdio.h>

void preencher (int v[]);
void processar (int v[]);
void imprimir (int v[]);

int main () {
  int valores[10];
  preencher(valores);
  processar(valores);
  imprimir(valores);
  return 0;
}

void preencher (int v[]) {
  for (int i = 0; i < 10; i++) {
    scanf("%d", &v[i]);
  }
}

void processar (int v[]) {
  int alvo;
  scanf("%d", &alvo);
  for (int i = 0; i < 10; i++) {
    if (v[i] == alvo) {
      v[i] = 0;
    }
  }
}

void imprimir (int v[]) {
  for (int i = 0; i < 10; i++) {
    printf("%d\n", v[i]);
  }
}