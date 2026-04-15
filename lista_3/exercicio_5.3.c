#include <stdio.h>

void altera_valor(int *x);

int main() {

    int x;

    scanf("%d", &x);

    altera_valor(&x);

    printf("%d\n", x);

}

void altera_valor(int *x) {
    int op;
    scanf("%d", &op);
    switch (op) {
        case 1:
            *x *= 2;
            break;
        case 2:
            (*x)++;
    }
}