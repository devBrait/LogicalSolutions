#include <stdio.h>

int main() {
    int valorA, valorB;

    while (1) {
        scanf("%d %d", &valorA, &valorB);

        if (valorA == valorB) {
            break; 
        }

        if (valorA < valorB) {
            printf("Crescente\n");
        } else {
            printf("Decrescente\n");
        }
    }

    return 0;
}
