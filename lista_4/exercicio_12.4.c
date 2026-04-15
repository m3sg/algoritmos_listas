#include <stdio.h>

int main () {
    char string[100];

    fgets(string, 100, stdin);

    int size = 0;
    while (string[size] != '\0') {
        if (string[size] == '\n') break;
        size++;
    }

    printf("tamanho da string: %d caracteres\n", size);
}