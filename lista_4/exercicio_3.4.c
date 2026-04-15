#include <stdio.h>

void validar_pares (int n);

int main () {
    int n;

    scanf("%d", &n);

    validar_pares(n);

    return 0;
}

void validar_pares (int n) {
    int valor, valores[n];
    int j = 0;
    int cont_par = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &valor);
        if (valor % 2 == 0) {
            valores[j] = valor;
            cont_par += 1;
            j++;
        }
    }
    for (int i = 0; i < cont_par; i++) {
        printf("%d\n", valores[i]);
    }
}