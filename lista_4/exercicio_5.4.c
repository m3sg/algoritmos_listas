#include <stdio.h>

void contar_ocorrencias (int n);

int main () {
    int n;
    scanf("%d", &n);
    contar_ocorrencias(n);
    return 0;
}

void contar_ocorrencias (int n) {
    int digito, ocorrencias[10] = {0};
    while (n > 0) {
        digito = n % 10;
        ocorrencias[digito]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i ++) {
        printf("%d = %d\n", i, ocorrencias[i]);
    }
}