#include <stdio.h>

int main() {
    char operation;
    double m[12][12];
    double sum = 0.0;
    int count = 0;
    
    scanf("%c", &operation);
    
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &m[i][j]);
        }
    }
    
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (j < 11 - i) { 
                sum += m[i][j];
                count++;
            }
        }
    }
    
    if (operation == 'M') {
        sum /= count;
    }
    printf("%.1lf\n", sum);
    
    return 0;
}
