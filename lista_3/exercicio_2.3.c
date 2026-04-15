#include <stdio.h>

int soma_recursiva(int x);

int main() {

    int x;

    scanf("%d", &x);

    printf("%d\n", soma_recursiva(x));

    return 0;

}

int soma_recursiva(int x) {

    if (x == 1) return 1;

    return x + soma_recursiva(x - 1);
    
}
