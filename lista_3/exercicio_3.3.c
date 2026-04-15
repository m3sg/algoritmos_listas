#include <stdio.h>

int potencia(int b, int e);

int main() {

    int b, e;

    scanf("%d %d", &b, &e);

    printf("%d\n", potencia(b, e));

    return 0;

}

int potencia(int b, int e) {

    if (e == 0) return 1;

    return b * potencia(b, e - 1);

}