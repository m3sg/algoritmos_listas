#include <stdio.h>

int dobra_valor(int valor);

int main () {
    int valor, resultado;
    scanf("%d", &valor);
    resultado = dobra_valor(valor);
    printf("%d\n", resultado);
}

int dobra_valor(int valor) {
    const int dobro = 2;
    return valor * dobro;
}