#include <stdio.h>

int main() {
    
    int l;
    char t;
    double m[12][12];
    double sum = 0.0;

    scanf("%d", &l);
    scanf(" %c", &t);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &m[i][j]);
        }
    }
    
    for (int j = 0; j < 12; j++) {
        sum += m[l][j];
    }

    if (t == 'S') {
        printf("%.1lf\n", sum);
    } else if (t == 'M') {
        printf("%.1lf\n", sum / 12);
    }

    return 0;
}
