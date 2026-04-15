#include <stdio.h>

int main () {
    int contador = 0;
    int tamanho = 0;
    char palavra[100];
    char vogais[6] = {'a', 'e', 'i', 'o', 'u', '\0'};

    scanf("%99s", palavra);

    while (palavra[tamanho] != '\0') {
        tamanho++;
    }

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < 6; j++) {
            if (palavra[i] == vogais[j]) {
                contador++;
            }
        }
    }

    printf("%d\n", contador);
}