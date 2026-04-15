#include <stdio.h>

void preencher (int v[]);
void ordenar (int v[]);
void imprimir (int v[]);

int main () {
    int valores[15] = {0};
    preencher(valores);
    ordenar(valores);
    imprimir(valores);
}

void preencher (int v[]) {
    for (int i = 0; i < 15; i++) {
        scanf("%d", &v[i]);
    }
}

void ordenar (int v[]) {
    int alvo, aux;
    printf("alvo\n");
    scanf("%d", &alvo);
    for (int i = 0; i < alvo; i++) {
        for (int j = 0; j <  alvo; j++) {
            if (v[i] < v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    for (int i = alvo + 1; i < 15; i++) {
        for (int j = alvo + 1; j < 15; j++) {
            if (v[i] > v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

void imprimir (int v[]) {
    for (int i = 0; i < 15; i++) {
        printf("%d\n", v[i]);
    }
}