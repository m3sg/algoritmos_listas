#include <stdio.h>

void preencher (int v[]);
void processar (int v[]);
void imprimir (int v[]);

int main () {
    int alvos[10] = {0}, qt_alvos, valores[10];
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
    int alvos[10] = {0}, qt_alvos;
    scanf("%d", &qt_alvos);
    for (int i = 0; i < qt_alvos; i++) {
        scanf("%d", &alvos[i]);
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < qt_alvos; j++) {
            if (v[i] == alvos[j]) {
                v[i] = 0;
            }
        }
    }
}

void imprimir (int v[]) {
    for (int i = 0; i < 10; i++) {
        printf("%d\n", v[i]);
    }
}