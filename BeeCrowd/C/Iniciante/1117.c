#include <stdio.h>

int main() {
    int count = 0;
    float nota, total = 0.0;

    while (count < 2) {
        scanf("%f", &nota);
        if (nota >= 0 && nota <= 10) {
            total += nota;
            count++;
        } else {
            printf("nota invalida\n");
        }
    }

    printf("media = %.2f\n", total / 2.0);

    return 0;
}
