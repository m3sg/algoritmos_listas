#include <stdio.h>

void par_ou_impar (int v[], int p[], int imp[], int n);

void imprimir (int p[], int imp[]);

int indice_p = 0;
int indice_imp = 0;

int main () {
    int n;

    scanf("%d", &n);

    int v[n], pares[n], impares[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    par_ou_impar(v, pares, impares, n);

    imprimir(pares, impares);

    return 0;
}

void par_ou_impar (int v[], int p[], int imp[], int n) {
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            p[indice_p] = v[i];
            indice_p++;
        } else {
            imp[indice_imp] = v[i];
            indice_imp++;
        }
    }
}

void imprimir (int p[], int imp[]) {
    for (int i = 0; i < indice_p; i++) {
        printf("pares[%d] = %d\n", i, p[i]);
    }
    for (int i = 0; i < indice_imp; i++) {
        printf("impares[%d] = %d\n", i, imp[i]);
    }
}