#include <stdio.h>
 
int main() {
 
    int cod_prod, cod_prod2, quant, quant2;
    double price, price2, valorTotal;
    
    printf("");
    scanf("%d %d %lf", &cod_prod, &quant, &price);
    printf("");
    scanf("%d %d %lf", &cod_prod2, &quant2, &price2);
    
    valorTotal = (quant * price) + (quant2 * price2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", valorTotal);
 
    return 0;
}