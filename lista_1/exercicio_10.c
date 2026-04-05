#include <stdio.h>

float soma(float valores[], int quantidade_valores);
float media(float soma, int quantidade_valores);
float maior_valor(float valores[], int quantidade_valores);

int main() {
    int quantidade_valores;
    float resultado_media, resultado_soma, resultado_maior_valor;

    scanf("%d", &quantidade_valores);

    float valores[quantidade_valores];

    for (int i = 0; i < quantidade_valores; i++) {
        scanf("%f", &valores[i]);
    }

    resultado_soma = soma(valores, quantidade_valores);
    resultado_media = media(resultado_soma, quantidade_valores);
    resultado_maior_valor = maior_valor(valores, quantidade_valores);

    printf("soma = %.1f\n", resultado_soma);
    printf("media = %.1f\n", resultado_media);
    printf("maior valor = %.1f\n", resultado_maior_valor);

}

float soma(float valores[], int quantidade_valores) {
    float soma = 0;
    for (int i = 0; i < quantidade_valores; i++) {
        soma += valores[i];
    }
    return soma;
}

float media(float soma, int quantidade_valores) {
    return soma/quantidade_valores;
}

float maior_valor(float valores[], int quantidade_valores) {
    float maior = valores[0];
    for (int i = 0; i < quantidade_valores; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
        }
    }
    return maior;
}


