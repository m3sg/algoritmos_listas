#include <stdio.h>

int main () {
    char palavra[10];
    int tamanho = 0;
    int palindromo = 1;

    scanf("%9s", palavra);

    while (palavra[tamanho] != '\0') {
        tamanho++;
    }

    for (int i = 0; i < tamanho / 2; i++) {
        if (palavra[i] != palavra[tamanho - 1 - i])
            palindromo = 0;
            break;
    }

    if (palindromo) {
        printf("palíndromo\n");
    } else {
        printf("não palíndromo");
    }

    return 0;
}
