#include <stdio.h>
 
int main() {
 
    char nome[50];
    double salario, vendas, bonus, salarioTotal;
    
    printf("");
    scanf("%s", &nome);
    printf("");
    scanf("%lf", &salario);
    printf("");
    scanf("%lf", &vendas);
    
    bonus = vendas * 0.15;
        
    salarioTotal = salario + bonus;
 
    printf("TOTAL = R$ %.2lf\n", salarioTotal);
}