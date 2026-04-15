#include <stdio.h>

void altera_c(char v[]);

int main() {
    char nome[100];
    scanf("%s", nome);
    altera_c(nome);
    printf("%s\n", nome);
    return 0;
}

void altera_c(char v[]) {
    v[0] = '@';
}