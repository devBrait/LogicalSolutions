#include <stdio.h>

int main() {
    char operation;
    float matrix[12][12];
    float sum = 0.0;
    int count = 0;

    scanf("%c", &operation);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &matrix[i][j]);
        }
    }

    for (int i = 1; i < 12; i++) {
        for (int j = 0; j < i; j++) {
            sum += matrix[i][j];
            count++;
        }
    }

    if (operation == 'S') {
        printf("%.1f\n", sum);
    } else if (operation == 'M') {
        printf("%.1f\n", sum / count);
    }
    
    return 0;
}
