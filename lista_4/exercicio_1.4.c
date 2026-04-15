#include <stdio.h>

void print_vetor (int v[]);

int main () {
    int valor, vetor[10] = {0};

    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    print_vetor(vetor);

}

void print_vetor (int v[]) {
    int *p = v;
    while (p <= &v[9]) {
        printf("%d\n", *p);
        p++;
    }
}