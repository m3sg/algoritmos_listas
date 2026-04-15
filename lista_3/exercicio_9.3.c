#include <stdio.h>

int fatorial(int n);

int main() {
    int n, op;
    scanf("%d", &n);
    scanf("%d", &op);
    if (op == 1) {
        for (int i = n - 1; i > 0; i--) {
            n = n * i;
        }
        printf("main = %d\n", n);
    } else {
        printf("func = %d\n", fatorial(n));
    }
    return 0;
}

int fatorial(int n) {
    if (n == 0) return 1;
    return n * fatorial(n - 1);
}