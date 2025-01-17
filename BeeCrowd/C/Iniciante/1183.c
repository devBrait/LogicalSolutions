#include <stdio.h>

int main() {
    char op;
    double m[12][12];
    double sum = 0.0;
    int count = 0;
    
    scanf(" %c", &op);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &m[i][j]);
        }
    }

    for (int i = 0; i < 12; i++) {
        for (int j = i + 1; j < 12; j++) {
            sum += m[i][j];
            count++;
        }
    }
    
    if (op == 'S') {
        printf("%.1f\n", sum);
    } else if (op == 'M') {
        printf("%.1f\n", sum / count);
    }
    
    return 0;
}
