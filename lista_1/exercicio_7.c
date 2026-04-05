#include <stdio.h>

void par_ou_impar(int numero);

int main () {
    int numero;
    scanf("%d", &numero);
    par_ou_impar(numero);
}

void par_ou_impar(int numero) {
    if (numero % 2 == 0) {
        printf("Par\n");
    } else {
        printf("Impar\n");
    }
}