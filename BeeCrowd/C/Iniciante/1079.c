#include <stdio.h>
 
int main() {
 
    
    int quantidadeTestes;
    scanf("%d", &quantidadeTestes);
    double media[quantidadeTestes];
    
    for(int i = 0; i < quantidadeTestes; i++)
    {
        double valor1, valor2, valor3;

        scanf("%lf %lf %lf", &valor1, &valor2, &valor3);
        
        valor1 = valor1 * 0.2;
        valor2 = valor2 * 0.3;
        valor3 = valor3 * 0.5;
        
        media[i] = valor1+valor2+valor3;
        
    }
    
    for(int i = 0; i < quantidadeTestes; i++){

        printf("%.1lf\n", media[i]);
    } 
    return 0;
}