#include <stdio.h>

int soma(int n1, int n2);

int main() {
    int n1, n2, resultado;
    scanf("%d %d", &n1, &n2);
    resultado = soma(n1, n2);
    printf("%d\n", resultado);
}

int soma(int n1, int n2) {
    return n1 + n2;
}