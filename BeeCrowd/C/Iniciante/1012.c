#include <stdio.h>
 
int main() {
 
    double a, b, c;
    
    printf("");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    double areaTriangulo = (a * c)/2;
    double areaCirculo = c*c*3.14159;
    double areaTrapezio = (a+b)*c/2;
    double areaQuadrado = b*b;
    double areaRetangulo = a*b;
    
    printf("TRIANGULO: %.3lf\n", areaTriangulo);
    printf("CIRCULO: %.3lf\n", areaCirculo);
    printf("TRAPEZIO: %.3lf\n", areaTrapezio);
    printf("QUADRADO: %.3lf\n", areaQuadrado);
    printf("RETANGULO: %.3lf\n", areaRetangulo);
    
    return 0;
}