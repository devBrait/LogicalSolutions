#include <stdio.h>

int main() {
    int N, X;
    
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &X);
        
        switch (X) {
            case 0:
                printf("NULL\n");
                break;
            default:
                if (X % 2 == 0) {
                    if (X > 0) {
                        printf("EVEN POSITIVE\n");
                    } else {
                        printf("EVEN NEGATIVE\n");
                    }
                } else {
                    if (X > 0) {
                        printf("ODD POSITIVE\n");
                    } else {
                        printf("ODD NEGATIVE\n");
                    }
                }
        }
    }

    return 0;
}
