#include <stdio.h>

int conta(int n);

int main() {

    int n;

    scanf("%d", &n);

    printf("%d\n", conta(n));

    return 0;

}

int conta(int n) {

    if (n == 0) return 1;

    return 1 + conta(n - 1);

}