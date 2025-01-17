#include <stdio.h>

int main() {
    int column;
    char operation;
    double m[12][12];
    double sum = 0.0;

    scanf("%d", &column);

    scanf(" %c", &operation);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &m[i][j]);
        }
    }

    for (int i = 0; i < 12; i++) {
        sum += m[i][column];
    }

    if (operation == 'S') {
        printf("%.1lf\n", sum);
    } else if (operation == 'M') {
        printf("%.1lf\n", sum / 12.0);
    }

    return 0;
}
