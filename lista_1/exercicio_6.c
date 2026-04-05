#include <stdio.h>

float media(float n1, float n2, float n3);

void validar_media(float media);

int main () {
    float n1, n2, n3, resultado;
    scanf("%f %f %f", &n1, &n2, &n3);
    resultado = media(n1, n2, n3);
    printf("%.1f\n", resultado);
    validar_media(resultado);
}

float media(float n1, float n2, float n3) {
    const float total = 3.0;
    return (n1 + n2 + n3)/total;
}

void validar_media(float media) {
    if (media >= 6.0) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
}