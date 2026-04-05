#include <stdio.h>

int x = 10;

int main() {
    char option;
    scanf(" %c", &option);
    if (option == 's') {
        int x = 20;
        printf("%d\n", x);
    } else {
        printf("%d\n", x);
    }
}

//neste código, se o usuário digitar 's', será impresso a variável de nome "x" do escopo local do if,
//entretanto, qualquer coisa diferente 's' resulta na impressão da variável de nome "x" do escopo global.