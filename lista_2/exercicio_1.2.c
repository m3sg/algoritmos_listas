#include <stdio.h>

int valor = 10;

int teste_valor(int x);

int main() {
    int b;
    printf("print main = %d\n", valor);
    b = teste_valor(valor);
    printf("print b = %d\n", b);
}

int teste_valor(int x) {
    int valor = 20;
    printf("print função = %d\n", valor);
    return valor;
}

//conclusão: a variável local (da função), é entendida como uma variável diferente, apesar do nome igual, porém, se
//eu mandasse a função imprimir a variável valor (sem declarar novamente), ele também imprimiria 10 (valor da global).

//além disso, retornei o valor da função para uma outra variável de escopo local da main, para mostrar que podemos guardar
//alterações em outras variáveis, sem precisar alterar a variável por referência.