#include <stdio.h>

void altera_valores(int *x, int *y);

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    altera_valores(&x, &y);
    printf("%d %d\n", x, y);
}

void altera_valores(int *x, int *y) {
    int w, z;
    scanf("%d %d", &w, &z);
    *x = w;
    *y = z;
}

//pede ao usuários dois valores na main, e depois, no procedimento, pede outros dois valores que
//sobrepõem os dois valores originais.