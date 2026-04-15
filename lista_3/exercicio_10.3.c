#include <stdio.h>

void altera_v(int v[], int size);

int main() {
    int size;
    scanf("%d", &size);
    int v[size], v_aux[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &v[i]);
    }
    altera_v(v, size);
}

void altera_v(int v[], int size) {
    for (int i = 0; i < (size * 2); i++) {
        if (i < size) {
            printf("v_original[%d] = %d\n", i, v[i]);
        } else {
            v[i - 5] *= 2;
            printf("v_dobrado[%d] = %d\n", i - 5, v[i - 5]);
        }
    }
}