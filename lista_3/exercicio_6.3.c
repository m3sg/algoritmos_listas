#include <stdio.h>

void dobra(int *x);

int main() {
    int x;
    scanf("%d", &x);
    dobra(&x);
    printf("%d\n", x);
}

void dobra(int *x) {
    *x *= 2;
}