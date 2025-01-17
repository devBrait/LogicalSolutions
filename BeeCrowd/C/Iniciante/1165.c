#include <stdio.h>
#include <math.h>

int main() {
    int n, value;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        
        int is_prime = 1;

        if (value <= 1) {
            is_prime = 0; 
        } else if (value == 2) {
            is_prime = 1; // 2 é primo
        } else if (value % 2 == 0) {
            is_prime = 0;
        } else {
            int raiz = sqrt(value);
            for (int j = 3; j <= raiz; j += 2) {
                if (value % j == 0) {
                    is_prime = 0;
                    break;
                }
            }
        }
        
        if (is_prime) {
            printf("%d eh primo\n", value);
        } else {
            printf("%d nao eh primo\n", value);
        }
    }
    
    return 0;
}
#include <stdio.h>
#include <math.h>

int main() {
    int n, value;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        
        int is_prime = 1;

        if (value <= 1) {
            is_prime = 0; 
        } else if (value == 2) {
            is_prime = 1; // 2 é primo
        } else if (value % 2 == 0) {
            is_prime = 0;
        } else {
            int raiz = sqrt(value);
            for (int j = 3; j <= raiz; j += 2) {
                if (value % j == 0) {
                    is_prime = 0;
                    break;
                }
            }
        }
        
        if (is_prime) {
            printf("%d eh primo\n", value);
        } else {
            printf("%d nao eh primo\n", value);
        }
    }
    
    return 0;
}
