#include <stdio.h>

int indice;

int contador();

int main() {

    char op;

    while (scanf(" %c", &op) == 1 && op == 's') {
        contador();
    }

    return 0;

}

int contador() {
    indice++;
    printf("chamada n%d\n", indice);
}

//algoritmo que, para toda vez que o usuario digita 's', chama uma função que incrementa o índice (variável global), e
//também imprime a cada chamada qual o índice daquela chamada de incremento. Este caso nem precisaria ser função. Um procedimento
//já bastaria, já que o valor alterado é global, então não precisamos de ponteiro, nem return, para este caso específico.