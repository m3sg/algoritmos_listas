#include <stdio.h>

void incrementa(int *x);

int main() {
    int x, op;

    scanf("%d", &x);

    while (scanf("%d", &op) != 0) {
        incrementa(&x);
        printf("%d\n", x);
    }

    printf("%d\n", x);

    return 0;
}

void incrementa(int *x) {
    ++(*x);
}

//pede para o usuário digitar um valor, e em seguida, enquanto ele digitar um valor diferente de zero, continua a
//incrementar o valor digitado inicialmente.