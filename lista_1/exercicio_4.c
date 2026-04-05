#include <stdio.h>

void boas_vindas(char nome[]);

int main() {
    char nome[10];
    scanf("%9s", nome);
    boas_vindas(nome);
}

void boas_vindas(char nome[]) {
    printf("Olá, %s\n", nome);
}
