#include <stdio.h>

int fatorial(int x);

int main() {

    int x;

    scanf("%d", &x);

    printf("%d\n", fatorial(x));

    return 0;

}

int fatorial(int x) {

    if (x == 0) return 1;

    return x * fatorial(x - 1);

}
