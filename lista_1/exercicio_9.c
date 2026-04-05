#include <stdio.h>

int soma(int n1, int n2);

void mostra_soma(int soma);

int main() {
    int numero1, numero2;
    scanf("%d %d", &numero1, &numero2);
    mostra_soma(soma(numero1, numero2));
}

int soma(int n1, int n2) {
    return n1 + n2;
}

void mostra_soma(int soma) {
    printf("%d\n", soma);
}