#include <stdio.h>

void altera_v(int v[], int size);

int main() {
    int size;
    scanf("%d", &size);
    int v[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &v[i]);
    }
    altera_v(v, size);
}

void altera_v(int v[], int size) {
    for (int i = 0; i < size; i++) {
        v[i] *= 2;
        printf("%d\n", v[i]);
    }
}