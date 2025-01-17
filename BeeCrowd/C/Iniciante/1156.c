#include <stdio.h>

int main() {
    
    double S = 0.0;
    int numerador = 1;
    int denominador = 1;

    while (numerador <= 39) {
        S += (double)numerador / denominador;
        numerador += 2;
        denominador *= 2;
    }

    printf("%.2f\n", S);
    return 0;
}
