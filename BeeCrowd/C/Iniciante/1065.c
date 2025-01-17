#include <stdio.h>

int main() {
    int valores[5];
    int pares = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (valores[i] % 2 == 0) {
            pares++;
        }
    }

    printf("%d valores pares\n", pares);

    return 0;
}
