#include <stdio.h>

void dobra_valor(int *x);

int main() {
    int x = 10;
    dobra_valor(&x);
    printf("%d\n", x);
}

void dobra_valor(int *x) {
    *x *= 2;
}

//conclusão: o print da main irá ter o valor dobrado, pois agora foi passado um endereço, e não uma cópia.