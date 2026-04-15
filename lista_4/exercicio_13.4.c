#include <stdio.h>

int main () {
    int found = 0;
    char string[100];
    char word[100];

    fgets(string, 100, stdin);
    fgets(word, 100, stdin);

    int size_string = 0;
    while (string[size_string] != '\0' && string[size_string] != '\n') {
        size_string++;
    }

    int size_word = 0;
    while (word[size_word] != '\0' && word[size_word] != '\n') {
        size_word++;
    }

    for (int i = 0; i <= size_string - size_word; i++) {
       int j = 0;
       while (j < size_word && string[i + j] == word[j]) {
           j++;
       }
       if (j == size_word) {
           found = 1;
           break;
       }
    }

    if (found) {
        printf("string contêm word\n");
    } else {
        printf("fail\n");
    }
}