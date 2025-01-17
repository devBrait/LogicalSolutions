#include <stdio.h>

int main() {
    int X, Y, sum = 0;

    scanf("%d %d", &X, &Y);

    if (X > Y) {
        int temp = X;
        X = Y;
        Y = temp;
    }

    for (int i = X + 1; i < Y; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}
