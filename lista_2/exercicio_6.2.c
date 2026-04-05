#include <stdio.h>

int triplo(int x);

int main() {
    int x = 10;
    x = triplo(x);
    printf("%d", x);
}

int triplo(int x) {
    return x * 3;
}

//nesse código, a função retorna o triplo do valor original, mas sobrescrevendo este valor inicial.