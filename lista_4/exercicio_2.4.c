#include <stdio.h>

void print_vetor (int v[]);

void maior_menor (int v[]);

void media (int v[]);

int main () {
    int vetor[10] = {0};

    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    print_vetor(vetor);

    maior_menor(vetor);

    media(vetor);

}

void print_vetor (int v[]) {
    int *p = v;
    while (p <= &v[9]) {
        printf("%d\n", *p);
        p++;
    }
}

void maior_menor (int v[]) {
    int maior = v[0], menor = v[0], *p = v;
    while (p <= &v[9]) {
        if (*p > maior) {
            maior = *p;
        } else if (*p < menor) {
            menor = *p;
        }
        p++;
    }
    printf("%d %d\n",  maior, menor);
}

void media (int v[]) {
    float soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += v[i];
    }
    printf("%.1f\n", soma);
    printf("%.1f\n", soma/10);
}