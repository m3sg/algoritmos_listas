#include <stdio.h>

void valor(int x);
void referencia(int *x);

int main() {
    int x, op;

    scanf("%d", &x);

    scanf("%d", &op);

    if (op == 1) {
        valor(x);
    } else if (op == 2) {
        referencia(&x);
        printf("%d\n", x);
    }

    return 0;

}

void valor(int x) {
    x++;
    printf("%d\n", x);
}

void referencia(int *x) {
    (*x)++;
}


//o algoritmo pede um número, e posteriormente pede entre duas possibilidades, incrementar por valor ou referência e
//printar na tela. O resultado final pode até parecer o mesmo, mas é preciso um "malabarismo" pra isso, já que na opção 2
//o valor realmente é alterado na variável original, por refêrencia, enquanto que na opção 1, altera-se uma cópia do valor
//dentro do procedimento. Caso o print fosse fora do procedimento, após escolher a opção 1, o valor original estaria lá.