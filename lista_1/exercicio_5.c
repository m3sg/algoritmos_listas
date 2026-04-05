#include <stdio.h>

float media(float n1, float n2, float n3);

int main () {
    float n1, n2, n3, resultado;
    scanf("%f %f %f", &n1, &n2, &n3);
    resultado = media(n1, n2, n3);
    printf("%.1f\n", resultado);
}

float media(float n1, float n2, float n3) {
    const float total = 3.0;
    return (n1 + n2 + n3)/total;
}