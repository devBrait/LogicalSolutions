#include <stdio.h>
#include <math.h>
 
int main() {
 
    double valor, valorFinal;
    
    printf("");
    scanf("%lf", &valor);
    
    double pi = 3.14159;
    
    valorFinal = (4/3.0) * pi * pow(valor, 3);
    
    printf("VOLUME = %.3lf\n", valorFinal);
 
    return 0;
}