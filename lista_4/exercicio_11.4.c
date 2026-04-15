#include <stdio.h>

int main () {
    int tamanho = 0;
    char palavra[100];
    char vogais[6] = {'a', 'e', 'i', 'o', 'u', '\0'};

    scanf("%99s", palavra);

    while (palavra[tamanho] != '\0') {
        tamanho++;
    }

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < 6; j++) {
            if (palavra[i] == vogais[j]) {
                switch (palavra[i]) {
                    case 'a':
                        palavra[i] = 4;
                    case 'A':
                        palavra[i] = '4';
                        break;
                    case 'e':
                        palavra[i] = '3';
                    case 'E':
                        palavra[i] = '3';
                        break;
                    case 'i':
                        palavra[i] = '1';
                    case 'I':
                        palavra[i] = '1';
                        break;
                    case 'o':
                        palavra[i] = '0';
                    case 'O':
                        palavra[i] = '0';
                        break;
                    case 'u':
                        palavra[i] = 'u';
                    case 'U':
                        palavra[i] = 'u';
                        break;
                }
            }
        }
    }


    printf("%s\n", palavra);

}