#include <stdio.h>

void dobra_valor(int x);

int main() {
    int x = 10;
    dobra_valor(x);
    printf("%d\n", x);
}

void dobra_valor(int x) {
    x *= 2;
    printf("%d\n", x);
}

//conclusão: por passagem de valor, o valor dobrado de x só existe durante o tempo que o procedimento está rodando,
//e essa alteração não reflete-se na main. A única maneira de alterar o valor da variável original, seria utilizar
//passagem por refência, ou usar um return para que a função retornasse  esse valor para ser utilizado depois na main.