#include <stdio.h>

int quadrado(int numero);

int main() {
    int numero, resultado;
    scanf("%d", &numero);
    resultado = quadrado(numero);
    printf("%d\n", resultado);
}

int quadrado(int numero) {
    return numero * numero;
}