#include <stdio.h>

int *incrementa(int *x);
int *dobra(int *x);
void sobrescreve(int *x);

int main() {

    int x;

    scanf("%d", &x);

    sobrescreve(dobra(incrementa(&x)));

    return 0;

}

int *incrementa(int *x) {
    (*x)++;
    printf("%d\n", *x);
    return x;
}

int *dobra(int *x) {
    *x *= 2;
    printf("%d\n", *x);
    return x;
}

void sobrescreve(int *x) {
    *x = 0;
    printf("%d\n", *x);
}

//algoritmo que pede um número, e em seguida transforma esse número três vezes por refêrencia, por meio de funções encadeadas.
//cada função retorna o endereço para a próxima, após modificar a variável, e também printa essa alteração. Exceto a última,
//que eu defini como um procedimento, pois ele não precisa retornar nada, apenas printar o resultado final alterado pelo ponteiro.