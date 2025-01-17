#include <stdio.h>

int main() {
    int n, value, menor, posicao;
    scanf("%d", &n);

    int x[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        x[i] = value;
    }
    menor = x[0];
    posicao = 0;

    for (int i = 1; i < n; i++) {
        if (x[i] < menor) {
            menor = x[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}
